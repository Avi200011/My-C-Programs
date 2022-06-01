#include<bits/stdc++.h>
using namespace std;
void ulta(string s)
{
    if (s.length()==0)
    {
        return;
    }
    string sub=s.substr(1);
    ulta(sub);
    cout<<s[0];
    
}
int main()
{
    ulta("google");
    return 0;
}