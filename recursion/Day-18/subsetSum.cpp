#include <bits/stdc++.h>
using namespace std;
// void subsetSum(vector<int> &arr, vector<int> temp, vector<int> &ans, int index)
// {
//     if (index == arr.size())
//     {
//         int sum = accumulate(temp.begin(), temp.end(), 0);
//         ans.push_back(sum);
//         return;
//     }
//     // take
//     subsetSum(arr, temp, ans, index + 1);
//     temp.push_back(arr[index]);

//     // not take
//     subsetSum(arr, temp, ans, index + 1);
// }

// without leading extraspace

void subsetSum(vector<int> &arr, int sum, vector<int> &ans, int index)
{
    if (index == arr.size())
    {
        ans.push_back(sum);

        return;
    }
    // take
    subsetSum(arr, sum, ans, index + 1);
    // temp.push_back(arr[index]);

    // not take
    subsetSum(arr, sum += arr[index], ans, index + 1);
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
    vector<int> ans;
    vector<int> temp;
    // subsetSum(arr, temp, ans, 0);

    // reduce space
    int sum = 0;
    subsetSum(arr, sum, ans, 0);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}