#include <bits/stdc++.h>
using namespace std;
void spiralTraverse(vector<vector<int>> &grid)
{
    int row = grid.size();
    int col = grid[0].size();
    int left = 0, right = col - 1;
    int top = 0, down = row - 1;
    int dir = 0;
    while (left <= right && top <= down)
    {

        if (dir == 0)
        {
            for (int i = left; i <= right; i++)
            {
                cout << grid[top][i] << " ";
            }
            top++;
        }
        else if (dir == 1)
        {
            for (int i = top; i <= down; i++)
            {
                cout << grid[i][right] << " ";
            }
            right--;
        }
        else if (dir == 2)
        {
            for (int i = right; i >= left; i--)
            {
                cout << grid[down][i] << " ";
            }
            down--;
        }
        else if (dir == 3)
        {
            for (int i = down; i >= top; i--)
            {
                cout << grid[i][left] << " ";
            }
            left++;
        }
        dir = (dir + 1) % 4;
    }
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

    spiralTraverse(grid);

    // for (int i = 0; i < grid.size(); i++)
    // {
    //     for (int j = 0; j < grid[i].size(); j++)
    //     {
    //         cout << grid[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}