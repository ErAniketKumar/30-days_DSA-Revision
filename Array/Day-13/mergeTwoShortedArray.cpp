#include <bits/stdc++.h>
using namespace std;
// merge two sorted array without using extra space

void mergeTwoArrayWithOutUsingExtraSpace(vector<int> &arr1, vector<int> &arr2)
{
    int i = arr1.size() - 1;
    int j = arr2.size() - 1;
    while (i >= 0 && j >= 0)
    {
        if (arr1[i] >= arr2[j])
        {
            arr1[i + j + 1] = arr1[i];
            i--;
        }
        else
        {
            arr1[i + j + 1] = arr2[j];
            j--;
        }
    }
    while (j >= 0)
    {
        arr1[i + j + 1] = arr2[j];
        j--;
    }
}

int main()
{

    int size1, size2;
    cin >> size1 >> size2;

    vector<int> arr1, arr2;
    for (int i = 0; i < size1; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
    }

    for (int i = 0; i < size2; i++)
    {
        int x;
        cin >> x;
        arr2.push_back(x);
    }

    mergeTwoArrayWithOutUsingExtraSpace(arr1, arr2);
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}