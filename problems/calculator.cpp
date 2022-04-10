#include <bits/stdc++.h>
using namespace std;
class calcultor
{
    float a,b;
    public:
    void result()
    {
    cin>>a;
    cin>>b;
    }
    float add()
    {
        return a+b;
    }
    float sub()
    {
        return a-b;
    }
    float mul()
    {
        return a*b;
    }
    float div() 
    {
        if (b==0)
        {
            cout<<"This is invalid chutiya "
            return INFINITY;
        }
        else 
        return a/b;
        
        
    }
};
int main()
{
    int ch;
    calcultor c;
    do
    {
        cout<<"Enter the choice ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            c.result;
            cout<<c.add();
            break;
        case 2:
        c.result;
        cout<<c.sub();
        break;
        case 3:
        c.result;
        cout<<c.mul();
        case 4:
        c.result;
        cout<<c.div();
        break;
        }
    } while (ch>=1 && ch<=4);
    return 0;
}