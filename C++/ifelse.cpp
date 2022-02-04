#include <iostream>
using namespace std;
int main()
{
    int money;
    cout << "Enter the money you have ";
    cin >> money;

    if (money < 70000)
    {
        if (money < 60000)
        {
            cout << "go ladhak with GF";
        }
        else
        {
            cout << "Go ladhak with friends";
        }
    }
    else if (money < 40000)
    {
        cout << "GOA is on";
    }
    else
    {
        cout << "puri";
    }

    return 0;
}