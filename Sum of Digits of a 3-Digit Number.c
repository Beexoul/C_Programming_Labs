//7) Write a program to input 3 digit integer number and print sum of digits in it.

#include <stdio.h>

int main() {
    int num, digit1, digit2, digit3, sum;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    if (num >= 100 && num <= 999) {
        
        digit1 = num / 100;
        digit2 = (num / 10) % 10;    
        digit3 = num % 10;           

        sum = digit1 + digit2 + digit3;

        printf("Sum of digits: %d\n", sum);
    } else {
        printf("Please enter a valid three-digit number.\n");
    }

    return 0;
}
