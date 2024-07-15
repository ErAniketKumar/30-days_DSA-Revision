#include <bits/stdc++.h>
using namespace std;
int avgWeatingTime(vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    long long ftime = 0;
    long long wtsum = 0;
    vector<long long> res;
    for (long long i = 0; i < arr.size(); i++)
    {
        ftime += arr[i];
        wtsum = (ftime + arr[i]) - arr[i];
        res.push_back(wtsum - arr[i]);
    }
    long long sum = accumulate(res.begin(), res.end(), 0);
    return sum / arr.size();
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
    cout << avgWeatingTime(arr) << endl;
    return 0;
}