#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    if(n==0)
    cout<<"This number is invalid "<<endl;
    else if(n%2==0)
    cout<<"The number is even "<<endl;
    else
    cout<<"The number is odd "<<endl;
    return 0;
}