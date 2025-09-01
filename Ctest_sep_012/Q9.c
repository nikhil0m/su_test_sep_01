#include <stdio.h>

int main()
{
    int num;
    int sum = 0;
    int count = 0;
    float average;
    printf("For starting loop last number must be 0\n");
    do {printf("Enter number: ");
        scanf("%d", &num);
        if (num != 0) {sum = sum + num;
                        count = count + 1;}}
    while (num != 0);
    if (count > 0) {average = (float)sum / count;
        printf("Sum of numbers: %d\n", sum);
        printf("Average of numbers: %.2f\n", average);}
    else {printf("Nothing entered.\n");}

    return 0;
}