#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b, c, d;
    a = 30;
    b = 40;
    c = 10;
    d = 20;
    printf("The sum is %d\n", sum(a, b));
    printf("The sum is %d", sum(c, d));
    return 0;
}