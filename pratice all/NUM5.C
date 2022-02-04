#include <stdio.h>
int main()
{
    float division;
    int x, y;
    printf("Enter x: \n");
    scanf("%d", &x);
    printf("Enter y: \n");
    scanf("%d", &y);

    if (x > y || x == y)
    {
        division = (float)x / y;
        printf("Real valued division: %d/%d \n", x, y);
        printf("Fractional division: %.2f \n", division);
    }
    else
    {
        division = (float)y / x;
        printf("Real valued division: %d/%d \n", y, x);
        printf("Fractional division: %.2f \n", division);
    }

    return 0;
}