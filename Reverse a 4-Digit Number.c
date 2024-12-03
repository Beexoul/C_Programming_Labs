/*
8) Write a program to input 4 digit integer number and print it in reverse order
(e.g. 674 => 476) 
*/

#include <stdio.h>

int main() {
    int number, reverse = 0, digit;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }

    printf("Reversed number = %d\n", reverse);
    return 0;
}
