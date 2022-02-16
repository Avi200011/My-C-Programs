#include <bits/stdc++.h>
using namespace std;
void toh(int n, int a, int b, int c)
{
    if (n == 0)
    {
        return;
    }
    toh(n - 1, a, c, b);
    cout << "move " << a << " to " << c << endl;
    toh(n - 1, b, a, c);
}

int main()
{
    toh(3, 1, 2, 3);
    return 0;
}
