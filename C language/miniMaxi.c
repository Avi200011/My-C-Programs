#include <stdio.h>
int main()
{
    int A, B, C;
    printf("Enter the three number");
    scanf("%d %d %d", &A, &B, &C);
    if (A >= B && A >= C)
    {
        printf("The maximum number is=%d\n", A);
    }
    else if (B >= C)
    {
        printf("The maximum number is=%d\n", B);
    }
    else
    {
        printf("The maximum number is=%d\n", C);
    }
    if (A < B && A < C)
    {
        printf("The minimum number is=%d", A);
    }
    else if (B < A && B < C)
    {
        printf("The minimum number is=%d", B);
    }
    else

        printf("The minimum number is=%d", C);

    return 0;
}