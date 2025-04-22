#include <stdio.h>

int p2(void){
    int i, n, sum;

    printf(" Enter an Integer: ");
    scanf("%d", &n);

    i = 1;
    sum = 0;

    while (i<=n)
    {
        sum += i;
        i++;
    }

    printf(" The sum from 1 to %d is %d \n", n, sum);

    return 0;
    
}

int main(void){
    int i, n, sum;

    printf(" Enter an Integer: ");
    scanf("%d", &n);

    i = 1;
    sum = 0;

    while (i<=n)
    {
        sum += i;
        i++;
    }

    printf(" The sum from 1 to %d is %d \n", n, sum);

    return 0;
    
}