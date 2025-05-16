#include <stdio.h>
#define isEven(x) ((x) % 2 == 0)
int main(void){
    int num = scanf("%d", &num);
    if(isEven(num)){
        printf("Num is Even.");
    }
    else{
        printf("Num is Odd.");
    }
    return 0;
}