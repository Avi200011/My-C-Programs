#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[],int n,int d){
    int p=1;
    while(p<=d){
    int last=arr[0];
    for (int i = 0; i < n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=last;
    p++;
    }
    
}
int main(){
    int arr[]={88,4,52,72,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d=4;
    rotate(arr,n,d);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}