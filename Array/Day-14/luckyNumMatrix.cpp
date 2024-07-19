#include <bits/stdc++.h>
using namespace std;

bool checkLucky(int r, int c, vector<vector<int>> grid)
{

    int maxic = INT_MIN;
    for (int i = 0; i < grid.size(); i++)
    {
        maxic = max(maxic, grid[i][c]);
    }
    return grid[r][c] == maxic;
}
int main()
{
    int row, col;
    cin >> row >> col;
    vector<vector<int>> grid;
    for (int i = 0; i < row; i++)
    {
        vector<int> temp;
        for (int j = 0; j < col; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        grid.push_back(temp);
    }

    for (int i = 0; i < grid.size(); i++)
    {
        int row = 0, col = 0;
        int mini = INT_MAX;
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (mini > grid[i][j])
            {
                row = i;
                col = j;
                mini = grid[i][j];
            }
        }
        if (checkLucky(row, col, grid))
        {
            cout << grid[row][col] << endl;
        }
    }

    return 0;
}