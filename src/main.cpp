#include "coding.h"
#include <stdio.h>

int main(void)
{
    Coding* coding = new Coding();
    char buf[5];
    printf("first:%d\r\n",*buf);
    unsigned int value = 0x41;
    char* ptr = coding->EncodeVarint32(buf,value);
    printf("before coding:%0x\r\n",value);
    printf("after coding:%0x\r\n",*ptr);
    return 0;
}
