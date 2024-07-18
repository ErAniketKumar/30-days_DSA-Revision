#include <bits/stdc++.h>
using namespace std;

int maximumProfit(vector<int> &arr)
{
    int n = arr.size();
    int maxProfit = 0;
    int minPrice = arr[0];

    for (int i = 1; i < n; ++i)
    {

        maxProfit = max(maxProfit, arr[i] - minPrice);

        minPrice = min(minPrice, arr[i]);
    }

    return maxProfit;
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

    cout << maximumProfit(arr) << endl;

    // little bit wrong

    // int n = arr.size();
    // int maxi = arr[n - 1];
    // int maxidx = -1;
    // int minidx = -1;
    // int mini = arr[0];
    // int maxVal = INT_MIN;
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     if (maxi <= arr[i])
    //     {
    //         maxi = arr[i];
    //         maxidx = i;
    //     }
    //     else if (mini > arr[i])
    //     {
    //         minidx = i;
    //         mini = arr[i];
    //     }
    //     if (minidx < maxidx)
    //     {
    //         maxVal = max(maxVal, arr[maxidx] - arr[minidx]);
    //     }
    //     }
    // cout << maxVal << endl;

    return 0;
}