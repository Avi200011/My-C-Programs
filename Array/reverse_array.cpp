#include<bits/stdc++.h>
using namespace std;
void revarray(int arr[],int start,int end)
{
    while (start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    
}
void printarray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
        //cout<<endl;
    }
    cout<<endl;
    
}
int main()
{
    int arr[]={9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,n); //print unreversed array
    revarray(arr,0,n-1);
    printarray(arr,n);
    return 0;
}