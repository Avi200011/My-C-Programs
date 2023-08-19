#include<bits/stdc++.h>
using namespace std;
void insertarray(int a[],int n){
    int i,key,j;
    for(i=1;i<n;i++){
        key=a[i];
        j=i-1;
    while(j>=0&&a[j]>key){
        a[j+1]=a[j];
        j=j-1;
    }
    a[j+1]=key;
    }

}
void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[]={11,3,4,16,7,1,40};
    int n=sizeof(a)/sizeof(a[0]);
    insertarray(a,n);
    printarray(a,n);
    return 0;
}