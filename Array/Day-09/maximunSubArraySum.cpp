#include <bits/stdc++.h>
using namespace std;
// kadan's alorithms
int maximumSubArraySum(vector<int> &arr)
{
    int sum = 0;
    int maxi = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        maxi = max(sum, maxi);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
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
    cout << maximumSubArraySum(arr) << endl;
    return 0;
}