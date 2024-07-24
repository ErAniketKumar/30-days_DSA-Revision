#include <bits/stdc++.h>
using namespace std;

bool static comp(const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    else
    {
        return a.second.second < b.second.second;
    }
}

int decodeMap(vector<int> &arr, int num)
{
    string str = to_string(num);
    string val = "";
    for (int i = 0; i < str.size(); i++)
    {
        int idx = str[i] - '0';
        val += to_string(arr[idx]);
    }

    return stoi(val);
}

vector<int> mappedSort(vector<int> &arr, vector<int> &varr)
{
    vector<pair<int, pair<int, int>>> vp;
    for (int i = 0; i < varr.size(); i++)
    {
        int val = decodeMap(arr, varr[i]);
        vp.push_back({val, {varr[i], i}});
    }

    sort(vp.begin(), vp.end(), comp);
    vector<int> ans;
    for (int i = 0; i < vp.size(); i++)
    {
        ans.push_back(vp[i].second.first);
    }
    return ans;
}

int main()
{
    int size1, size2;
    cin >> size1 >> size2;
    vector<int> arr;
    vector<int> vArr;
    for (int i = 0; i < size1; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    for (int i = 0; i < size2; i++)
    {
        int x;
        cin >> x;
        vArr.push_back(x);
    }
    vector<int> ans = mappedSort(arr, vArr);
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}