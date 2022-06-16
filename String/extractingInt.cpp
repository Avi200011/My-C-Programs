#include <bits/stdc++.h>
using namespace std;
void extractstring(string str)
{
    stringstream ss;
    ss << str;
    string temp;
    int found;
    while (!ss.eof())
    {
        ss>>temp;
        if (stringstream(temp)>>found)
        {
            cout<<found<<endl;
        }
        
    }
    
}
int main()
{
    string str = "Chack 123 chack 456";
    extractstring(str);
    return 0;
}