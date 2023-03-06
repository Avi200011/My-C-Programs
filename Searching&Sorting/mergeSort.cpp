#include <bits/stdc++.h>
using namespace std;
void  merge(arr[], int l, int r, int mid)
{
    int n1 = mid - l + 1; //l->mid
    int n2 = r - mid; //mid->r

    int a[n1];
    int b[n2]; // temp array

    for (int i = 1; i < n1; i++)
    { // value put in array
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = a[i];
        k++;
        j++;
    }
}
void mergesort(int arr[], int l, int r, int mid)
{
    if (l < r) // l==r -> There is one element
    {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, r, mid + 1);
    }
}
int main()
{
    int arr[]=[4,55,2,5,8];
    mergesort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}