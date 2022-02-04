#include <stdio.h>
int main()
{
    int number;
    int sum = 0;
    int x;
    printf("enter a number\n");
    scanf("%d", &number);
    for (; number != 0;)
    {
        x = number % 10;
        sum = sum + x;
        number = number / 10;
    }
    printf("sum of digits=%d", sum);
}
