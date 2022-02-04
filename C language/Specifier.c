#include <stdio.h>
// #define PI = 4.66
int main()
{
    // pi = 5.66; pi is a constant so you cannot do this
    int a = 5;
    const float b = 9.44; // this cant be changed bcz i use const function for make it constant
    // b = 8.33;
    // // this make a gap or space in degit num of input ex: %a.2f
    // printf("the value of a is %d and the value of b \a %5.2f this", a, b);
    printf("the value of a is %d and the value of b %f\n this", a, b);

    return 0;
}