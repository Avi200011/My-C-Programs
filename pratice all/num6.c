#include <stdio.h>
int main()
{
    int A, B, C;
    printf("Enter the three number:");
    scanf("%d %d %d", &A, &B, &C);
    if (A >= B && A >= C)
    {
        printf("%d is the maximum number\n", A);
    }
    else if (B>=C)
    {
        printf("%d is the maximum number\n",B);
    }
    else{
        printf("%d is the maximum number\n",C);
    }
    
    if (A < B && A < C)
    {
        printf("%d is the minimum number", A);
    }
    else if (B < A && B < C)
    {
        printf("%d is the minimum number", B);
    }
    else
    {
        printf("%d is the minimum number", C);
    }
    return 0;
}