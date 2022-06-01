#include <bits/stdc++.h>
using namespace std;
string paline(string n)
{
    string a = n;
    reverse(a.begin(), a.end());
    if (n == a)
    {
        return "yes";
    }
    else
        return "no";
}
int main()
{
    string n = "assa";
    cout << paline(n);
    return 0;
}