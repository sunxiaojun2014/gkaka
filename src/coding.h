
#ifndef CODING_H_
#define CODING_H_

class Coding
{
    public:
        Coding();

        char* EncodeVarint32(char* dst, unsigned int value);
};

#endif
