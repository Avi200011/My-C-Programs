// Find the tylor serise using recursion
#include <bits/stdc++.h>
using namespace std;
double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;

    if (n == 0)
    {
        return 1;
    }
    r = e(x, n - 1); //e(x,2)+e(x,3)+e(x,4)...n
    p = p * x;
    f = f * n;
    return (r + p / f);
}
int main()
{
    int x = 4, n = 15;
    cout << "\n"<< e(x, n) << endl;

    return 0;
}