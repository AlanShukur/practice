#include <stdio.h>

int main(){
  int a = 10;
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
  return 0;
}
