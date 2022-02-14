#include<bits/stdc++.h>
using namespace std;
void printall(char set[],string prefix,int n,int k)//empty output string
{
    if (k==0)
    {
        cout<<(prefix)<<endl;
        return;
    }
    //one by one by add call char form set and recursivly call for k eqals to k-1
    for (int i = 0; i < n; i++)
    {
        string newPrefix;
        newPrefix=prefix+set[i]; //call one by one
        //k-1 bcz we add new char
        printall(set,newPrefix,n,k-1);
    }
    
}
void printall(char set[], int k,int n)
{
    printall(set,"",n,k);
}
int main()
{
    char set1[]={'a','b'};
    int k=3; //num of length 
    printall(set1,k,2);
}