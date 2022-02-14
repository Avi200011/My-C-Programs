
#include<bits/stdc++.h>
using namespace std;
int sum(int n){
if (n==0)  //base case= n=0 -> 0
{
    return 0;
}
    int presum=sum(n-1);
    return n+presum;
}
int main()
{
    int n;
    n=4;
    cout<<sum(n);
}