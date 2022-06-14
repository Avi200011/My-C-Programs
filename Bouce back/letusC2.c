#include<stdio.h>
int main()
{
    int array[26],i;
    for (int i = 0; i <= 25; i++)
    {
        array[i]='A'+i;
        printf("%d%c\n",array[i],array[i]);
    }
    return 0;
}