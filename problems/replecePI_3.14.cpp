#include <bits/stdc++.h>
using namespace std;
string replacepi(string s)
{
    if (s.length() == 0 || s.length() == 1)

        return s;

    if (s[0] == 'p' && s[1] == 'i')
    {
        string output = replacepi(s.substr(2));
        return "3.14" + output;
    }
    else
    {
       return s[0] + replacepi(s.substr(1));
    }
}
int main()
{
    cout<<replacepi("piavipi");
    return 0;
}