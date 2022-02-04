#include<iostream>
using namespace std;
class ractangle 
{
    private:
        int length;
        int breadth;
    public:
        void Setlength(int l)
        {
        if (l>=0)
            length=l;
        else
            length=0;
        }
        void SetBreadth(int b)
        {
            if (b>=0)
            breadth=b;
            else
            breadth=0;
        }
};
