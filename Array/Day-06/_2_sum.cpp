#include <bits/stdc++.h>
using namespace std;
pair<int, int> findIdxThatElementEqualToTarget(vector<int> &arr, int target)
{
    unordered_map<int, int> m;
    for (int i = 0; i < arr.size(); i++)
    {
        if (m.find(arr[i]) == m.end())
            m[arr[i]] = i;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        int half = target - arr[i];
        auto it = m.find(half);
        if (it != m.end() && i != (*it).second)
        {
            return {i, (*it).second};
        }
    }
    // if not found
    return {-1, -1};
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
    int target;
    cin >> target;
    pair<int, int> ans = findIdxThatElementEqualToTarget(arr, target);
    cout << ans.first << " " << ans.second << endl;
    return 0;
}