#include <stdio.h>

typedef struct{
    int rollno;
    int class;
    char SEC;
}Student;
// using pass by refrence . saves a ton of memory and fast
void main(Student *pstu){
    pstu->rollno = 23;
    pstu->class = 10;
    pstu->SEC = 'A';
    printf("Student info: Roll: %d, Class: %d, SEC: %c", pstu->rollno, pstu->class, pstu->SEC);
}