#include <stdio.h>

struct Rectriangle // making a basic structure 
{
    int length;
    int bredth;
};
void change_length(struct rectriangle *p, int a){
    p -> length= a;
}

int area(struct Rectriangle data) // make a fun thats takes the structure as a parameter
{
    return data.length * data.bredth;
}

int main()
{
    printf("Structure As a Parameter\n");
    struct Rectriangle R = {10, 29};
    printf("The area of the squre i: - %d", area(R));
    change_length(&R, int 20)
    return 0;
}