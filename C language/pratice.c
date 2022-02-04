#include <stdio.h>
#include <conio.h>

void add(int x, int y, &x, &y)
{
    printf("The sum of the %d and %d = %d", x, y, x + y);
    printf("The sum of the %d and %d = %d", x, y, *x + *y);
}

int main()
{
    int a, b;
    printf("Enter your 1st number:= ");
    scanf("%d", &a);
    printf("Enter your 2nd number:= ");
    scanf("%d", &b);
    add(a, b);
    return 0;
}