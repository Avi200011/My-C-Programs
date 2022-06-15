#include <bits/stdc++.h>
using namespace std;
int main()
{
    // char colour[4][10]={"black","blue","red"}; //using 2d array
    array<string, 5> colour{"black", "blue", "red"};
    //using class of array
    for (int i = 0; i < 4; i++)
    {
        cout << colour[i] << endl;
    }
    return 0;
}