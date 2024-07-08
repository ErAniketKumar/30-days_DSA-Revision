#include <bits/stdc++.h>
using namespace std;
int missingNum(vector<int> &arr)
{
    int n = arr.size();
    int sum = (n * (n + 1)) / 2;
    int arrsum = accumulate(arr.begin(), arr.end(), 0);
    return sum - arrsum;
}

int missingNum_Method2(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    for (int i = 0; i <= arr.size(); i++)
    {
        if (arr[i] != i)
            return i;
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
    cout << missingNum(arr) << endl;
    cout << missingNum_Method2(arr) << endl;
    return 0;
}