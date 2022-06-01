
//Chef is currently at checkpoint A and wants to reach checkpoint B. Find the minimum length of the road he needs to travel.
// 4
// 1 3 100
// 1 98 100
// 40 30 50
// 2 1 2
//2
// 3
// 10
// 1
#include <bits/stdc++.h>
using namespace std;
int a, b, m;
int solve()
{
    int ans1 = b - a;
    int ans2 = m - b + a;

    return min(ans1, ans2);
}
signed main()
{
    int TT = 1;
    cin >> TT;
    for (int tt = 1; tt <= TT; tt++)
    {
        cin >> a >> b >> m;
        if (a > b)
            swap(a, b);
        cout << solve() << "\n";
    }
    return 0;
}
