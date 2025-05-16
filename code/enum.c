#include <stdio.h>
// Used for clear context;
enum days{
    MONDAY,
    SUNDAY,
    FRIDAY,
    ERROR
};

void main(){
    enum days today = MONDAY;
    const char *day_names[] = { "MONDAY", "SUNDAY", "FRIDAY", "ERROR" };
    if(today == ERROR){
        printf("Error determining day.");
    }
    else{
        printf("%s", day_names[today]);
    }
}