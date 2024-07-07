#include <bits/stdc++.h>
using namespace std;

int secMax_Ele(vector<int> &arr)
{
    int max = arr[0], max2 = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max2 = max;
            max = arr[i];
        }
        else if (max > arr[i] && arr[i] > max2)
        {
            max2 = arr[i];
        }
        else if (max == max2)
        {
            max2 = -1;
        }
    }
    return max2;
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
    cout << secMax_Ele(arr) << endl;

    return 0;
}