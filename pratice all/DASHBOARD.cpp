#include<bits/stdc++.h>
using namespace std;
int print(int n)
{
    if (n==0)
    {
        return 0;
    }
    else
    cout<<n<<endl;
    return print(n-1);
}
int main()
{
    int n=10;
    print(n);
    return 0;
}