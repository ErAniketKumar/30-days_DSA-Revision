#include <bits/stdc++.h>
using namespace std;

void sortArr(vector<int> &arr)
{
    int left = 0;
    int right = arr.size() - 1;
    int mid = 0;
    while (mid <= right)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[left]);
            mid++;
            left++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[right]);
            right--;
        }
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

    sortArr(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}