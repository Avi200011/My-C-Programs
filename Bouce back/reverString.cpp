// #include<bits/stdc++.h>
// using namespace std;
// void ulta(string s)
// {
//     if (s.length()==0)
//     {
//         return;
//     }
//     string sub=s.substr(1);
//     ulta(sub);
//     cout<<s[0];
    
// }
// int main()
// {
//     ulta("google");
//     return 0;
// }
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        int digit=n%10;
        n/=10;
    }
    return 0;
}