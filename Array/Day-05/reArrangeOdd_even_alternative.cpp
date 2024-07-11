#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> ans(nums.size(), 0);
    int k = 0, j = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            ans[k] = nums[i];
            k += 2;
        }
        else
        {
            ans[j] = nums[i];
            j += 2;
        }
    }
    return ans;
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
    vector<int> ans = rearrangeArray(arr);

    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}