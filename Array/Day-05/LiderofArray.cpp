#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans;
    int maxi = arr[n - 1];

    for (int i = n - 1; i >= 0; i--)
    {
        if (maxi <= arr[i])
        {
            ans.push_back(arr[i]);
            maxi = arr[i];
        }
    }
    reverse(ans.begin(), ans.end());
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
    vector<int> ans = leaders(arr);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}