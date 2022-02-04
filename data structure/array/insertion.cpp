#include<iostream>
using namespace std;
void display(int arr[], int n )
{//travalsal
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    

}
int indinsertion(int arr[],int size,int element,int capacity,int index)
{
    //insertion in array
    if (size>=capacity)
    {
        return -1;    //-1 means that return error
    }
    for (int i = size-1; i >=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
    
    
}
int main()
{
    int arr[100]={1,5,9,10,12};
    //declear the size , element and the index number where you put the element
    int size=5,element=69,index=3;
    display(arr,size);
    indinsertion(arr,size,element,100,index);//function call
    size=+1;
    display(arr,6);
    return 0;
}