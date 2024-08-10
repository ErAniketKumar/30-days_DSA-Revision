#include <bits/stdc++.h>
using namespace std;

// int findTheWinner(vector<int> &arr, int k)
// {
//     int index = 0;
//     while (arr.size() > 1)
//     {
//         index = (index + k - 1) % arr.size();
//         cout << "Index to be removed: " << index << endl;
//         arr.erase(arr.begin() + index);
//     }

//     cout << "Remaining element: " << arr[0] << endl;
//     return arr[0];
// }

// using recursion

int findTheWinner(int n, int k)
{
    if (n == 1)
        return 0;
    return (findTheWinner(n - 1, k) + k) % n;
}
int main()
{
    int size;
    cin >> size;
    vector<int> arr;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int k;
    cin >> k;
    // cout << findTheWinner(arr, k) << endl;

    return findTheWinner(size, k) + 1;
    return 0;
}