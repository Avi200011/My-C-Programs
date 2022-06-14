//best case of recuction
#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main()
{

    int n = 5; 
    cout << "Factorial of " << n << " = " << factorial(n);

    return 0;
}

// 5*4!  n*face(n-1)
// =5*4*3!
// =5*4*6
// =120
