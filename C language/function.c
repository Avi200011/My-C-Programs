#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a,b,add=0;
    printf("Enter the frist integer\n");
    scanf("%d",&a);
    printf("Enter the second integer\n");
    scanf("%d",&b);
    add=sum(a,b);
    printf("The sum of two number is %d\n",add);
    return 0;
}   