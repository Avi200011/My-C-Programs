#include <stdio.h>
//Here we directly use char function so that
//we have not use ; in this programm
char fun()
{
    return 'a';
}
int main()
{
    char c = fun();
    printf("The letter is = %c", c);
}