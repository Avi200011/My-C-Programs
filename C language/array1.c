#include <stdio.h>
int main()
{
    int marks[10], i, n, sum = 0, average;
    printf("Enter the number of elements = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number %d = ", i + 1);
        scanf("%d", &marks[i]);

        sum += marks[i];
    }
    average = sum / n;
    printf("Average = %d", average);

    return 0;
}

// here we can access any array in the formet of indices 
