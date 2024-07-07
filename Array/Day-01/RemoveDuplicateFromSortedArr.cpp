#include <bits/stdc++.h>
using namespace std;
void removeDuplicate(vector<int> &arr)
{
    int i = 0, j = 1;
    while (j < arr.size())
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
            j++;
        }
        else
        {
            arr[j] = -1;
            j++;
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
    removeDuplicate(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != -1)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}