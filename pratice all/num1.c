#include <stdio.h>

int main()
{
    int A, B;
    printf("Enter Value of A ");
    scanf("%d", &A);
    printf("\nEnter Value of B ");
    scanf("%d", &B);

    int temp = A;
    A = B;
    B = temp;

    printf("\nAfter Swapping: A = %d, B = %d", A, B);
    return 0;
}