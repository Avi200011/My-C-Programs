//remove diplicate of "aaaabbbbccccdddd"
#include<bits/stdc++.h>
using namespace std;
string remove(string s)
{
    if (s.length()==0)
    {
        return " ";
    }
    char ch=s[0]; //1st element of the string
    string ans=remove(s.substr(1));
    if (ch==ans[0])
    {
        return ans;
    }
    return (ch+ans);
    
}
int main()
{
    cout<<remove("aabbccddee")<<endl;
    return 0;
}