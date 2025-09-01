#include <stdio.h>

int main() {
    float s1, s2, s3, s4, s5;

    printf("Marks in S1: ");
    scanf("%f", &s1);
    printf("Marks in S2: ");
    scanf("%f", &s2);
    printf("Marks in S3: ");
    scanf("%f", &s3);
    printf("Marks in S4: ");
    scanf("%f", &s4);
    printf("Marks in S5: ");
    scanf("%f", &s5);
    
    float total, percentage;

    total = s1+s2+s3+s4+s5;
    percentage = (total /500.0)*100;
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 90) {printf("Grade: A+\n");}
    else if (percentage >= 80) {printf("Grade: A\n");} 
    else if (percentage >= 70) {printf("Grade: B\n");} 
    else if (percentage >= 60) {printf("Grade: C\n");} 
    else if (percentage >= 50) {printf("Grade: D\n");} 
    else if (percentage >= 40) {printf("Grade: E\n");} 
    else {printf("Grade: Fail\n");}

    return 0;
}