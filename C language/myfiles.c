#include <stdio.h>
#include <conio.h>

struct student
{
    char name[50];
    int roll;
    char add[150];
};

int main()
{
    printf("This is the structure In the C language\n");
    struct student shubhajit = {"Shubhajit Sarkar", 45, "Kecduadihi haritakibagan"};
    printf("%s", shubhajit.name);

    return 0;
}