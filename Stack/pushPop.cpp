#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>stack;
    stack.push(11);
    stack.push(22);
    stack.push(33);
    stack.push(44);

    stack.pop();
    stack.pop();

    while (!stack.empty()) //Use a while loop and empty() function to check whether the stack is NOT empty. The ! is the NOT operator.
    {
        cout<<stack.top()<<" ";
        stack.pop();
    }
    return 0;
}