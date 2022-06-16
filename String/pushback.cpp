//appending demo
#include<bits/stdc++.h>
using namespace std;
void appendemo(string s1,string s2)
{
    string s=s1; //tempotary variable
    //appending using +=
    s1+=s2;
    cout<<s1<<"(+=)"<<endl;

    //appending using append()
    s.append(s2);
    cout<<s<<endl;
}
int main()
{
    string s1="veja chok";
    string s2="konno dakai ni tomai";
    cout<<s1<<endl;
    appendemo(s1,s2);
    return 0;
}