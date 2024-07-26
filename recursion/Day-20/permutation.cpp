#include <bits/stdc++.h>
using namespace std;

// void findPermutations(vector<int> &arr, vector<int> &temp, vector<vector<int>> &ans, vector<bool> &visited)
// {
//     if (arr.size() == temp.size())
//     {
//         ans.push_back(temp);
//         return;
//     }
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (!visited[i])
//         {
//             visited[i] = true;
//             temp.push_back(arr[i]);
//             findPermutations(arr, temp, ans, visited);
//             visited[i] = false;
//             temp.pop_back();
//         }
//     }
// }

// without using visited array and temp array

void permutations(vector<int> &arr, vector<vector<int>> &ans, int index)
{

    if (index == arr.size())
    {
        ans.push_back(arr);
        return;
    }

    for (int i = index; i < arr.size(); i++)
    {
        swap(arr[i], arr[index]);
        permutations(arr, ans, index + 1);
        swap(arr[i], arr[index]); // after return back do same sequence
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
    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> visited(size, false);
    // findPermutations(arr, temp, ans, visited);

    // without using extra temp & visited array
    permutations(arr, ans, 0);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}