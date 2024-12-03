// Write a program to find the area of rectangle.

#include <stdio.h>

int main() {
    float length, breadth, area;
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);
    area = length * breadth;
    printf("Area of the rectangle = %.2f\n", area);
    return 0;
}
