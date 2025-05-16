#include <stdio.h>
#define DEBUG

#ifdef DEBUG // bellow will be included if DEBUG is defined in file
    #define ANDROID 1
#endif
#ifndef DEBUG // bellow will work if DEBUG is missing in file 
    #define ANDROID 0
#endif

int main(void){
    printf("Debug build: %d", ANDROID);
    return 0;
}