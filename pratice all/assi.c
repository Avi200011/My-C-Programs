#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int di(int a, int b);
int main()
{
    int x, y, FUN, ADD, SUB, MUL, DIV;
    printf("Enter Two Numbers x and y respectively:");
    scanf("%d%d", &x, &y);

    printf("Enter ADD=1 SUB=2 MUL=3 DIV =3 for your particular function to be performed:\n");
    scanf("%d", &FUN);

    ADD = add(x, y);
    SUB = sub(x, y);
    MUL = mul(x, y);
    DIV = di(x, y);

    if (FUN == 1)
        printf("Sum of the numbers is %d\n", ADD);
    else if (FUN == 2)
        printf("Difference of the numbers is %d\n", SUB);
    else if (FUN == 3)
        printf("Product of the numbers is %d\n", MUL);
    else if (FUN == 4)
        printf("Quotient of the number is %.2f\n", DIV);
    else
        printf("ERROR Function not valid\n");

    return 0;
}
int add(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
int sub(int a, int b)
{
    int result;
    if (a > b)
        result = a - b;
    else
        result = b - a;
    return result;
}
int mul(int a, int b)
{
    int result;
    result = a * b;
    return result;
}
int di(int a, int b)
{
    float result;
    result = (float)a / b;
    return result;
}