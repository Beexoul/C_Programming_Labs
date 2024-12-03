// Write a program to input 3 digit integer number and print sum of digits in it.

#include <stdio.h>

int main() {
    int number, sum = 0, digit;
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
