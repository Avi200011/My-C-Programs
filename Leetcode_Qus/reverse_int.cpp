#include <bits/stdc++.h>
using namespace std;
int reverse(int num)
{
    int rev_num = 0;
    while (num != 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num /= 10;
    }
    return rev_num;
}

int main()
{
    int digit;
    cin >> digit;
    cout << reverse(digit);
    return 0;
}