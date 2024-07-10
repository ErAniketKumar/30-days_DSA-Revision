#include <bits/stdc++.h>
using namespace std;
vector<int> sortArray_WithOut_BuiltinFun(vector<int> &arr)
{
    int zeroes = 0, ones = 0, twoes = 0;
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
            zeroes++;
        else if (arr[i] == 1)
            ones++;
        else
            twoes++;
    }
    for (int i = 0; i < zeroes; i++)
    {
        ans.push_back(0);
    }
    for (int i = 0; i < ones; i++)
    {
        ans.push_back(1);
    }
    for (int i = 0; i < twoes; i++)
    {
        ans.push_back(2);
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
    vector<int> ans = sortArray_WithOut_BuiltinFun(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}