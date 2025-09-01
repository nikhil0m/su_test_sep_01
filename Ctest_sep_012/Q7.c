#include <stdio.h>
int main() {
    int number, remainder, result = 0, n = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &number);
    while (number != 0) {number /= 10;n++;}
    
    while (number != 0) {remainder = number % 10; 
        result = result + (remainder, n); number= number/ 10;}
    if ( (int)result == number)
        {printf("%d is an Armstrong number.\n", number);} 
    else {printf("%d is not an Armstrong number.\n", number);}

    return 0;
}