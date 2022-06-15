#include <bits/stdc++.h>
using namespace std;
void removespace(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            s.erase(s.begin() + i);
            i--;
        }
    }
    cout << s;
}

int main()
{
    string s = "G ee k";
    cout << s << endl;
    removespace(s);

    // string se = "G ee k";
    // cout << se << endl;
    // removespace(se);
    return 0;
}