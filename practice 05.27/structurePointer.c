#include <stdio.h>

struct structurePointer
{
    int number;
    char name[20];
    double grade;
};

int main(void){
    struct structurePointer s = {1, "Hong gil-dong", 4.3};
    struct structurePointer *p;

    p = &s;

    printf("Student number = %d, Name = %s, Grade = %f\n", s.number, s.name, s.grade); 
    printf("Student number = %d, Name = %s, Grade = %f\n", (*p).number, (*p).name, (*p).grade); 
    printf("Student number = %d, Name = %s, Grade = %f\n", p->number, p->name, p->grade); 

    return 0;
}
