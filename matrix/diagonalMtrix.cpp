#include <bits/stdc++.h>
using namespace std;
struct matrix
{
    int A[10];
    int n;
};
void Set(struct matrix *m, int i, int j, int x)
{
    if (i == j)
    {
        m->A[i - 1] = x;
    }
}
int Get(struct matrix m, int i, int j)
{
    if (i == j)
    {
        return m.A[i - 1];
    }
    else
        return 0;
}
void display(struct matrix m)
{
    int i;
    int j;
    for (i = 0; i < m.n; i++)
    {
        for ( i = 0; i < m.n; i++)
        {
            if (i == j)
            {
                cout << m.A[i - 1];
            }
            else
                cout << "0 ";
        }
        cout << endl;
    }
}
int main()
{
    struct matrix m;
    m.n ;
    cin>>m>>n;
    Set(&m, 1, 1, 5);
    Set(&m, 2, 2, 8);
    Set(&m, 3, 3, 9);
    Set(&m, 4, 4, 12);
    cout<<Get(m, 2, 2);
    display(m);
    return 0;
}
