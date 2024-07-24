#include <bits/stdc++.h>
using namespace std;

void printAllsubsequence(vector<int> &arr, vector<int> temp, vector<vector<int>> &res, int index)
{
    if (index == arr.size())
    {
        res.push_back(temp);
        return;
    }
    // not take
    printAllsubsequence(arr, temp, res, index + 1);
    temp.push_back(arr[index]);
    // not take
    printAllsubsequence(arr, temp, res, index + 1);
    // not require this temp.pop_back() but for space optimization
    temp.pop_back();
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
    vector<vector<int>> res;
    vector<int> temp;
    printAllsubsequence(arr, temp, res, 0);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}