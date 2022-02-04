#include<iostream>
using namespace std;


void fun(int x){
    if(x==0) return;
    fun(x-1);
    cout<<x<<endl;
}

void printx(){
    cout<<"this is the print x";
}

int main(){
    fun(10);
    return 0;
}