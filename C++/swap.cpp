#include<iostream>
using namespace std;
template<class T>
T maxim(T a,T b)
{
    return a>b?a:b;
}
int main()
{
    cout<<maxim(12,34)<<endl;
    cout<<maxim(13.5,34.6)<<endl;
    cout<<maxim(12.7f,34.5f);
    return 0;
}