// check array sorted or not
//  if sorted then return true else false;
#include <bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > arr[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
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

    if (checkSorted(arr))
    {
        cout << "Sorted True" << endl;
    }
    else
    {
        cout << "Not Sorted" << endl;
    }
    return 0;
}