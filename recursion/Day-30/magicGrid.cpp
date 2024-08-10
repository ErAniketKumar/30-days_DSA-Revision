#include <bits/stdc++.h>
using namespace std;

bool isMagicGrid(vector<vector<int>> &grid, int r, int c)
{
    unordered_set<int> st;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int num = grid[r + i][c + j];
            if (num < 1 || num > 9 || st.count(num))
            {
                return false;
            }
            else
            {
                st.insert(num);
            }
        }
    }

    int SUM = grid[r][c] + grid[r][c + 1] + grid[r][c + 2];
    for (int i = 0; i < 3; i++)
    {
        if (grid[r + i][c] + grid[r + i][c + 1] + grid[r + i][c + 2] != SUM)
        {
            return false;
        }

        if (grid[r][c + i] + grid[r + 1][c + i] + grid[r + 2][c + i] != SUM)
        {
            return false;
        }
    }

    if (grid[r][c] + grid[r + 1][c + 1] + grid[r + 2][c + 2] != SUM)
    {
        return false;
    }

    if (grid[r][c + 2] + grid[r + 1][c + 1] + grid[r + 2][c] != SUM)
    {
        return false;
    }

    return true;
}

int countMagsicGrid(vector<vector<int>> &grid, int row, int col)
{
    int count = 0;
    for (int i = 0; i <= row - 3; i++)
    {
        for (int j = 0; j <= col - 3; j++)
        {
            if (isMagicGrid(grid, i, j))
            {
                count++;
            }
        }
    }
    return count;
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

    cout << countMagsicGrid(grid, row, col) << endl;
    return 0;
}