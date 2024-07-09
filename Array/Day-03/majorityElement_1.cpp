#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &arr)
{
    int count = 0;
    sort(arr.begin(), arr.end());
    int ele = arr[arr.size() / 2];
    for (int i = 0; i < arr.size(); i++)
    {
        if (ele == arr[i])
        {
            count++;
        }
    }
    if (count >= arr.size() / 2)
    {
        return ele;
    }
    else
    {
        return -1;
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
    cout << majorityElement(arr) << endl;
    return 0;
}