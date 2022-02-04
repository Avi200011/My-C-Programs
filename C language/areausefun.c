#include <stdio.h>
int areaofrect(int a, int b);
{
    int area;
    area = a * b;
    return area;
}
int main()
{
    int a, b, c;
    a = 10;
    b = 10;
    c = areaofrect(a, b);
    printf("The area of rectangel is=%d", c);
    return 0;
}