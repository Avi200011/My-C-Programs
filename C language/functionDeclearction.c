#include <stdio.h>
//Here we use char a name function first
//so when we use 1st time as name function we have to use ;
char fun();
int main()
{
    char c = fun();
    printf("The letter is =%c", c);
}
char fun()

{
    return 'a';
}