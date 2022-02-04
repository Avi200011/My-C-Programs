//fabonachhi serise using recursion
#include<bits/stdc++.h>
using namespace std;
int feb(int n)
{
    if (n==0)
    {
        return 0;
    }
    if (n==0||n==1)
    {
        return 1;
    }
    else
    {
        return (feb(n-1)+feb(n-2));
    }
    
}
int main()
{
    int n=5;
    cout<<"The fabonachhhi serise are "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<feb(i)<<endl;
    }
    return 0;
    

}