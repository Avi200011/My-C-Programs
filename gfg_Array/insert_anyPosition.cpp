#include<bits/stdc++.h>
using namespace std;
void insertany(int arr[],int n,int x,int pos){
    for(int i=n-1;i>=pos;i--)
    arr[i+1]=arr[i];

    arr[pos]=x;
}
int main()
{
    int arr[]={11,2,34,52,62,51};
    int n=6;
    int x=10;
    int pos=3;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    insertany(arr,n,x,pos);
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}