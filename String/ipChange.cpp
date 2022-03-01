#include <bits/stdc++.h>
using namespace std;
bool deffipadd(string s1, string s2)
{
    if (s1.length() != s2.length())

        return false;

    string temp = s1 + s1;
    return (temp.find(s2) != string::npos);
}
int main()
{
    string s1 = "AABC", s2 = "BCAA";
    if (deffipadd(s1, s2))
        cout << "yes";
    else
        cout << "no";
    return 0;
}
// AABCAABC