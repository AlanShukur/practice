#include <stdio.h>

int main(void){
  /* int a = 10;
  printf("Hello\n");
  
  printf("%d\n", 10);
  printf("%f\n", 3.14);
  printf("%.2f\n", 3.14159);
  printf("%c\n", 'A');

  printf("%10d\n", 123);
  printf("%-10d\n", 123);

  printf("%.2f\n", 3.14159);

  printf("%05d\n", 42);
 //test


  int age;
  float height;
  printf("Enter your age and height: ");

  scanf("%d %f", &age, &height);
  printf("You are %d years old and %.2f meters tall.\n", age, height); 
    int year, result;

    printf ( " Enter the year : " );
    scanf ( "%d" , &year);
    
    result = ( (year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    printf ( "result=%d \n" , result);

    int number;
    printf("Enter an integer :");
    scanf("%d", &number);

    if (number<0)
    {
      number = -number;
    }

    printf("The absolute value is %d.", number);
    
    int score;

    printf("Enter your grades : ");
    scanf("%d", &score);

    if (score>=90)
      {
        printf("passed: Grade A\n");
      }else if (score>=80)
      {
        printf("passed: Grade B\n");
      }else if (score >= 70)
      {
        printf("passed: Grade C\n");
      } else if (score >= 60)
      {
        printf("passed: Grade D\n");
      } else
      {
        printf("passed: Grade F\n");
      }*/

    char op;
    int x, y, result;

    printf("Enter a formula (e.g 2 + 5) >>");
    scanf("%d %c %d", &x, &op, &y);

    if (op == '+')
      {
        result = x + y;
      } else if (op == '-')
      {
        result = x - y;
      } else if (op == '*')
      {
        result = x * y;
      } else if (op == '/')
      {
        result = x / y;
      } else if (op == '%')
      {
        result = x % y;
      } else
      {
        printf("unsupported operator.");
      }

      printf("%d %c %d = %d \n", x, op, y, result);

  return 0;
}
