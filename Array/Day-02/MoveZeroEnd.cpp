#include <bits/stdc++.h>
using namespace std;
// void shiftArray(int k, vector<int> &arr)
// {
//     for (int i = k; i < arr.size() - 1; i++)
//     {
//         arr[i] = arr[i + 1];
//     }
// }
// void movoZeroAtEnd(vector<int> &arr)
// {

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] == 0)
//         {
//             shiftArray(i, arr);
//             arr[arr.size() - 1] = 0;
//         }
//     }
// }

void movoZeroAtEnd(vector<int> &arr)
{
    int lastNonZeroEle = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[lastNonZeroEle]);
            lastNonZeroEle++;
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
    movoZeroAtEnd(arr);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}