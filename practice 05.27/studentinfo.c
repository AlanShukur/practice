#include <stdio.h>
#include <string.h>

struct studentinfo
{
    int number;
    char name[100];
    double grade;
};

int main (void){
    struct studentinfo s;

    s.number = 20230001;
    strcpy (s.name, "Hong gil-dong");
    s.grade = 4.3;

    printf("Student number : %d\n", s.number);
    printf("Name : %s\n", s.name);
    printf("Grade : %.2f\n", s.grade);
    return 0;
    
}
