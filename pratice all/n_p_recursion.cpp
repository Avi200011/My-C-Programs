#include<bits/stdc++.h>
using namespace std;
int power(int n, int p)
{
    if (p == 0)//base case  [ n^0=1 ]
    {
        return 1;
    }

    int precall = power(n, p - 1);
    return n * precall;
}
int main()
{
    int n,p;
    n = 4;
    p = 3;
    cout << power(n,p);
}