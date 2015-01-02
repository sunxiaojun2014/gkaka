#include <stdio.h>
#include "coding.h"
Coding::Coding()
{}

char* Coding::EncodeVarint32(char* dst, unsigned int v)
{
    unsigned char* ptr = reinterpret_cast<unsigned char*>(dst);
    printf("first:%c\r\n",*ptr);
    static const int B = 128;
    if (v < (1<<7)) {
        *(ptr++) = v;
    } else if (v < (1<<14)) {
        *(ptr++) = v | B;
        *(ptr++) = v>>7;
    } else if (v < (1<<21)) {
        *(ptr++) = v | B;
        *(ptr++) = (v>>7) | B;
        *(ptr++) = v>>14;
    } else if (v < (1<<28)) {
        *(ptr++) = v | B;
        *(ptr++) = (v>>7) | B;
        *(ptr++) = (v>>14) | B;
        *(ptr++) = v>>21;
    } else {
        *(ptr++) = v | B;
        *(ptr++) = (v>>7) | B;
        *(ptr++) = (v>>14) | B;
        *(ptr++) = (v>>21) | B;
        *(ptr++) = v>>28;
    }
    return reinterpret_cast<char*>(ptr);
}
