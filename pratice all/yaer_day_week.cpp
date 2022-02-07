#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,w,d;
    cout<<"Enter the number of days ";
    cin>>d;

    y=d/365;
    d=d%365;
    w=d/7;
    d=d%7;

    cout<<"Number of years is "<<y<<endl<<"Number of weeks "<<w<<endl<<"Number of the day is "<<d<<endl;

    return 0;
}