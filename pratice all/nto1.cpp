#include<bits/stdc++.h>
using namespace std;
void print(int num)
{
    if (num==1)
    {
        cout<<num<<" ";
        return;
    }
    cout<<num<<" ";
    print(num-1);
    

}
int main()
{
    int n=10;
    print(n);
    return 0;
}