#include <bits/stdc++.h>
using namespace std;

bool static comp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    else
    {
        return a.first < b.first;
    }
}

vector<int> frequencySort(vector<int> &nums)
{
    vector<int> ans;
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]]++;
    }
    vector<pair<int, int>> vp;
    for (auto x : m)
    {
        vp.push_back({x.second, x.first});
    }
    sort(vp.begin(), vp.end(), comp);
    for (int i = 0; i < vp.size(); i++)
    {
        int frq = vp[i].first;
        while (frq--)
        {
            ans.push_back(vp[i].second);
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

    vector<int> ans = frequencySort(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}