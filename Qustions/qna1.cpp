#include <iostream>
using namespace std;
int mian()
{
    int row, colm;
    cin >> row >> colm;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= colm; j++)
        {
            cout << "b";
        }
        cout << endl;
    }
    return 0;
}