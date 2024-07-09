#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        bool flag = true;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                flag = false;
            }
        }
        if (flag)
        {
            return arr[i];
        }
    }
    return -1;
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
    cout << singleNumber(arr) << endl;
    return 0;
}