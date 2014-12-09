#include<stdio.h>
#include<iostream>
#include<string.h>
#include"leveldb/db.h"

int main(void)
{
    //define some var
    leveldb::DB *db;
    leveldb::Options options;
    leveldb::Status status;

    //open leveldb
    options.create_if_missing = true;
    std::string dir = "../var/db";
    status = leveldb::DB::Open(options, dir, &db);

    if(!status.ok())
    {
        // cout << status.tostring();
        printf("open leveldb error");
        return -1;
    }
    //put
    std::string key = "hello";
    std::string value = "world";
    status = db->Put(leveldb::WriteOptions(),key,value);

    //get
    std::string val;
    if(status.ok())
        status = db->Get(leveldb::ReadOptions(), key, &val);
    printf("The value is %s",val.c_str());
    delete db;
    return 0;
}
