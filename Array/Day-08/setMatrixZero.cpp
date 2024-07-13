#include <bits/stdc++.h>
using namespace std;

void doZero(vector<vector<int>> &v, int r, int c)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (i == r || j == c)
            {
                v[i][j] = 0;
            }
        }
    }
}

void setZeroes(vector<vector<int>> &matrix)
{

    // vector<pair<int, int>> init;
    vector<vector<int>> v = matrix;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                doZero(v, i, j);
            }
        }
    }

    matrix = v;

    // for (auto x : init)
    // {
    //     int r = x.first;
    //     int c = x.second;
    //     for (int i = 0; i < matrix.size(); i++)
    //     {
    //         for (int j = 0; j < matrix[i].size(); j++)
    //         {
    //             matrix[i][r] = 0;
    //             matrix[i][c] = 0;
    //         }
    //     }
    // }
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

    setZeroes(arr);
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