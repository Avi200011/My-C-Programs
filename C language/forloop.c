#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0, j = 0; j < 3, i < 6; i++)
    {
        printf("%d%d\n", i, j);
        j++;
    }
    return 0;
}