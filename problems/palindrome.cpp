#include<bits/stdc++.h>
using namespace std;
void paline(int n)
{
    int a = n;
    reverse(a.being(), a.end());
    if (n == a)
    {
        return "yes";
    }
    else
        return "no";
}
int main()
{
    int n = 10001;
    cout << paline(n);
    return 0;
}