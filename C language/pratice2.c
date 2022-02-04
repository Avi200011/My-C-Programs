#include <stdio.h>
#include <conio.h>

int main()
{
    printf("Take user input in the Array and print the List\n");
    printf("Enter the Size of the Array:= ");
    int num = 0, arr[num];
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("Enter the %d-th number:= ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < num; j++)
    {
        printf("%d\n", arr[j]);
    }

    return 0;
}