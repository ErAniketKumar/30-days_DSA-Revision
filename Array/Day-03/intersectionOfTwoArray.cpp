#include <bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    unordered_map<int, int> m1, m2;
    for (int i = 0; i < nums1.size(); i++)
    {
        m1[nums1[i]]++;
    }
    for (int i = 0; i < nums2.size(); i++)
    {
        m2[nums2[i]]++;
    }
    vector<int> res;

    for (auto x : m1)
    {
        auto it = m2.find(x.first);
        if (it != m2.end())
        {
            res.push_back(x.first);
        }
    }
    return res;
}

int main()
{
    int size1, size2;
    cin >> size1 >> size2;
    vector<int> arr1, arr2;
    for (int i = 0; i < size1; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
    }

    for (int i = 0; i < size2; i++)
    {
        int x;
        cin >> x;
        arr2.push_back(x);
    }

    vector<int> res = intersection(arr1, arr2);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}