#include <bits/stdc++.h>
using namespace std;
bool sufflesub(string A, string B)
{
    int n = A.length();
    int m = B.length();
    if (n > m)
    {
        return false;
    }
    else
    {
        sort(A.begin(), A.end());
        for (int i = 0; i < m; i++)
        {
            if (i + n - 1 >= m)

                return false;
            string str;
            for (int j = 0; j < n; j++)
                str.push_back(B[i + j]);

            sort(str.begin().str.end());

            if (str == A)
                return true;
        }
    }
}
int main()
{
    string str1 = "abba";
    string st2 = "abbaharmoniumbjatethe";
    bool a = sufflesub(str1, str2);
    if (a)
    {
        cout << "yes";
    }
    else
        cout << "no";
    return 0;
}