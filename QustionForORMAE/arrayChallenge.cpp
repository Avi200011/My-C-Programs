#include<bits/stdc++.h>
using namespace std;

int main()
{
    boolean solve(Set<Integer> selectedNumbers, int selectedSum, int index)
    {
        if (selectedNumbers.size() >= arr.length / 2)
        {
            return sum == arrSum / 2;
        }
        if (index > arr.length)
        {
            return false;
        }
        boolean solved = false;

        // First case: add array element at this index:
        if (selectedSum + arr[index] <= arrSum / 2)
        {
            seplectedNumbers.add(arr[index]);
            arrSum += arr[index];
            solved = solve(selectedNumbers, arrSum, index + 1);
            if (!solved)
            {
                // No remove(int index), so remove an Object, Integer.
                selectedNumbers.remove(Integer.valueOf(arr[index]));
                arrSum -= arr[index];
            }
        }

        // Second case: do not add array element at this index:
        if (!solved)
        {
            solved = solve(selectedNumbers, arrSum, index + 1);
        }
        return solved;
    }

    return 0;
}