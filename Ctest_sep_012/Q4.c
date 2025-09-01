#include <stdio.h>

int main() {
    int num;
    int factorial = 1;
    int i;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num < 0) {printf("not defined.\n");}
        else {for (i = 1; i <= num; i++) 
            {factorial= factorial* i;}
    printf("Factorial is = %d\n", factorial); }

    return 0;
}