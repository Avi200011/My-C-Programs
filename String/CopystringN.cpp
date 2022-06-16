#include <bits/stdc++.h>
using namespace std;
string repeat(string s,int n)
{
    string s1 = s;
    for (int i = 1; i < n; i++)
    {
        s = s + s1;
    }
    return s;
}
int main()
{
    string s = "moxadope";
    int n = 3;
    cout<< repeat(s,n);
    return 0;
}