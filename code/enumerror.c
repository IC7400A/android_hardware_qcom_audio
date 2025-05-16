#include <stdio.h>
// Error checking code logic in the AOSP style c 
enum{
    ERROR_READ = 1,
    ERROR_WRITE = 2,
    ERROR_CONNECTION
};
int main(){
    int error_code = 1;
    if(error_code == ERROR_READ){
        printf("Read error.");
    }
    else{
        printf("Pass");
    }
    return 0;
}