#include <bits/stdc++.h>
using namespace std;
void compare(string s1, string s2)
{
    if (s1 != s2)
    {
        cout << s1 << " is not equal " << s2 << endl;
        if (s1 > s2)
        {
            cout << s1 << " is more than " << s2 << endl;
        }
        else
            cout << s1 << " is less than " << s2 << endl;
    }
    else
        cout << s1 << " equal " << s2 << endl;
}
int main()
{
    string s1 = "google";
    string s2 = "amazon";
    compare(s1, s2);
    string s3 = "FAANG";
    string s4 = "FAANG";
    compare(s3, s4);
    return 0;
}