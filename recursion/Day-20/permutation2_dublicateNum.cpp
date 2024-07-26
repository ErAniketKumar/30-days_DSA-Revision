#include <bits/stdc++.h>
using namespace std;

void permutation2(vector<int> &arr, int index, vector<vector<int>> &ans)
{
    vector<bool> visited(21, 0);

    if (arr.size() == index)
    {
        ans.push_back(arr);
        return;
    }

    for (int i = index; i < arr.size(); i++)
    {
        if (!visited[arr[i] + 10])
        {
            swap(arr[index], arr[i]);
            permutation2(arr, index + 1, ans);
            swap(arr[index], arr[i]);
            visited[arr[i] + 10] = true;
        }
    }
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
    vector<vector<int>> ans;
    vector<bool> visited(21, false);

    permutation2(arr, 0, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}