#include<sys/types.h>
#include<sys/stat.h>
#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<linux/fs.h>

void log(int var);
int main(void)
{
    pid_t pid;
    int i;

    //create child process,father process exit
    pid = fork();
    log(pid);
    log(getppid());
    log(getpgid(0));
    log(getsid(0));
    if(pid == -1)
        return -1;
    else if (pid != 0)
        exit(EXIT_SUCCESS);


    //create new session
    if(setsid() == -1)
        return -1;

    //change work directory
    if(chdir("/")==-1)
        return -1;

    //close all open file discription
    for(i=0; i<3; i++)
        close(i);

    //redirect fd's 0,1,2 to /dev/null
    open("/dev/null",O_RDWR);
    dup(0);
    dup(0);

    //do your logic things
     i =1;
    while(i)
    {
        i++;
    }
    return 0;
}

void log(int var)
{
    FILE *fp = fopen("./log.txt","a+");
    fprintf(fp,"%d",var);
    fputs("\r\n",fp);
}
