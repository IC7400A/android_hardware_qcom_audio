#include <stdio.h>
#define DEBUG

#ifdef DEBUG
    #define ANDROID 1
#endif
#ifndef DEBUG
    #define ANDROID 0
#endif

int main(void){
    printf("Debug build: %d", ANDROID);
    return 0;
}