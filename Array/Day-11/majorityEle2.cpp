#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    unordered_map<int, int> m;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        m[nums[i]]++;
    }
    vector<int> res;
    for (auto x : m)
    {
        if (x.second > n / 3)
        {
            res.push_back(x.first);
        }
    }

    return res;
}

int main()
{
    vector<int> v, res;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    res = majorityElement(v);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}