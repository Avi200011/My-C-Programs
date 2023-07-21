#include<bits/stdc++.h>
using namespace std;
int searching(int arr[],int n,int key){
    for(int i=0;i<n-1;i++)
        if(arr[i]==key)
        return i;
        return -1;
}
int main()
{
    int arr[]={22,4,5,6,77,86};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=78;
    searching(arr,n,key);
    int position=searching(arr,n,key);
    if(position==-1){
        cout<<"Element not found";
    }else{
        cout<<position+1<<endl;
    }
    return 0;
}