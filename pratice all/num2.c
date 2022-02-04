#include <stdio.h> //NUM 2
int main()
{
    float length, width, diameter, pi = 3.14;
    float recarea, recperimeter, cirarea, circumference;
    printf("Enter the length of rectangel:");
    scanf("%f", &length);
    printf("Enter the breadth of rectangel:");
    scanf("%f", &width);
    printf("Enter the radius of circle:");
    scanf("%f", &diameter);

    recarea = length * width;
    recperimeter = 2 * (length + width);
    cirarea = pi * (diameter * diameter);
    circumference = (pi / 2) * diameter;

    printf("\nThe area of the rectangel:%.2f", recarea);
    printf("\nThe parameter of the rectangel:%.2f", recperimeter);
    printf("\nThe area of the circle:%.2f", cirarea);
    printf("\nThe circumference of the circle:%.2f", circumference);
    return 0;
}