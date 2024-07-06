#include <bits/stdc++.h>
using namespace std;

void reverseArrByRecursion(vector<int> &arr, int start, int end)
{
    if (start > end)
        return;
    swap(arr[start], arr[end]);
    reverseArrByRecursion(arr, start + 1, end - 1);
}

void reverseArr(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
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
    cout << "with- out reverse" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArr(arr);
    cout << "after reverse" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArrByRecursion(arr, 0, size - 1);

    cout << "reverse By recursively" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}