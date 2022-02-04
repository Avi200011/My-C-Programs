#include <stdio.h>
int fact(int a)
{
    if (a >= 1)
    {
        return (a * fact(a - 1));
    }
    else
    {
        return 1;
    }
}
int main()
{
    int a;
    printf("Enter the integer number\n");
    scanf("%d", &a);
    printf("factorial of %d is %d", a, fact);

    return 0;
}