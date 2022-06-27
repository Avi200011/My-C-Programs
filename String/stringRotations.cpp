#include <bits/stdc++.h>
using namespace std;
bool strotation(string str1, string str2)
{
    if (str1.length() != str2.length())
    {
        return false;
    }
    string temp = str1 + str1;
    return (temp.find(str2) != string::npos);
}
int main()
{
    string str1 = "ABACD", str2 = "ACDAB";
    if (strotation(str1, str2))
    {
        cout << "rotation to eachother";
    }
    else
        cout << "are not rotation";
    return 0;
}