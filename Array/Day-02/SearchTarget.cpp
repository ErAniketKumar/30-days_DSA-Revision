#include <bits/stdc++.h>
using namespace std;

// give array is sorted
// binary search
bool isPresent(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size();
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return true;
        }
        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return false;
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
    int target;
    cin >> target;
    if (isPresent(arr, target))
    {
        cout << "Yes Present" << endl;
    }
    else
    {
        cout << "Not Present" << endl;
    }
    return 0;
}