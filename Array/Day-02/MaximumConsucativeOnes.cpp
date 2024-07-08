#include <bits/stdc++.h>
using namespace std;
int maxConsucativeOnes(vector<int> &arr)
{
    int maxi = 0, count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            count++;
            maxi = max(maxi, count);
        }
        else
            count = 0;
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
    cout << maxConsucativeOnes(arr) << endl;
    return 0;
}