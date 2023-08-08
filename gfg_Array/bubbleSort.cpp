#include <bits/stdc++.h>
using namespace std;
void bubblesort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        cout << " " << arr[i];
    }
}
int main()
{
    int a[] = {22, 3, 4, 5, 2, 1, 21, 23};
    int n = sizeof(a) / sizeof(a[0]);
    bubblesort(a, n);
    cout<<"After sort array";
    print(a,n);
    return 0;
}