#include <stdio.h>
#define SIZE 3

struct inputStudentInfo
{
    int number;
    char name[20];
    double grade;
};

int main(void){
    struct inputStudentInfo list[SIZE];
    int i;

    for (i = 0; i < SIZE; i++)
    {
        printf("Student number Enter: ");
        scanf("%d", &list[i].number);
        
        printf("Enter name: ");
        scanf("%s", list[i].name);

        printf("Enter Credit ( Error ): ");
        scanf("%lf", &list[i].grade);
    }

    for (i = 0; i < SIZE; i++)
    {
        printf(" Student number : %d, Name : %s, Grade : %f\n",
        list[i].number, list[i].name, list[i].grade);
    }

    return 0;
    
    
    
}
