#include<bits/stdc++.h>
using namespace std;
void reverse(string a)
{
    if (a.length()==0)
    {
        return;
    }
    string ros=a.substr(1);
    reverse(ros);
    cout<<a[0];
    
}
int main()
{
    string n="avijit";
    //reverse(n.begin(),n.end());
    reverse(n);
    return 0;
}