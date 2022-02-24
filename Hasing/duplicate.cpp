#include <bits/stdc++.h>
using namespace std;
bool hasdupli(vector<int> &input, int k)
{
    unordered_map<int, int> map; // sotre(element , index)
    for (int i = 0; i < input.size(); i++)
    {
        if (map.find(input[i]) != map.end()) // if current element already exsist
        {
            if (i - map[input[i]] <= k)
            {
                return true;
            }
        }
        map[input[i]] = i;
    }
    return false;
}
int main()
{
    vector<int> input = {3, 4, 5, 6, 7, 8, 9, 3, 2};
    int k = 4;
    if (hasdupli(input, k))
    {
        cout << "Duplicate found " << endl;
    }
    else
    {
        cout << "Not found " << endl;
    }
    return 0;
}