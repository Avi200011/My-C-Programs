#include <stdio.h>
#include <conio.h>

int[] fun(int n)
{
    int *p;                             // Making a local pointer in the function
    p = int(*) malloc(n * sizeof(int)); // Allocating the space in the heap memory with the array size
    return (p);                         // returning the pointer allocated to the memory
}
int main()
{
    int *A;     // making a pointer in the main function
    A = fun(5); // giving the array size 5 and the function will return an arry with that size
    return 0;
}