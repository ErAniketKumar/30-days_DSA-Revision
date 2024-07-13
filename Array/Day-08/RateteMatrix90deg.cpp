#include <bits/stdc++.h>
using namespace std;

void rotateMatrix90Deg(vector<vector<int>> &matrix)
{
    // transpose matrix
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = i; j < matrix[i].size(); j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // swap to col
    for(int i=0;i<matrix.size();i++)
    {
        int s = 0, e = matrix.size()-1;
        while(s<e)
        {
            swap(matrix[i][s], matrix[i][e]);
            s++;e--;
        }
    }
}

int main()
{
    int row, col;
    cin >> row >> col;
    vector<vector<int>> arr;
    for (int i = 0; i < row; i++)
    {
        vector<int> temp;
        for (int j = 0; j < col; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        arr.push_back(temp);
    }

    rotateMatrix90Deg(arr);
    cout << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}