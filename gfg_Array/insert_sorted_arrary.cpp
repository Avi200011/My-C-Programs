#include<bits/stdc++.h>
using namespace std;
int fun(int arr[],int low ,int high,int key){
    if(high<low)
    return -1;
    int mid=(low+high)/2;
    if(key==arr[mid])return mid;
    if(key>arr[mid])
    return fun(arr,mid+1,high,key);
    return fun(arr,low,mid-1,key);
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int key;
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    key=6;
    cout<<fun(arr,0,n-1,key);
    return 0;
}