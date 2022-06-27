#include<bits/stdc++.h>
using namespace std;
void replacepi(string s)
{
    if (s.length()==0)
    {
        return;
    }
    if (s[0]=='p'&&s[1]=='i')
    {
        cout<<"3.14"<<endl;
        replacepi(s.substr(2));
    }
    else
    {
        replacepi(s.substr(2));
    }
    
    
}
int main()
{
    string str="pipipipipip";
    replacepi(str);
    return 0;
}