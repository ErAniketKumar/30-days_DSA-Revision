#include <bits/stdc++.h>
using namespace std;
bool isSafetoMove(int new_x, int new_y, int n, vector<vector<int>> &grid, vector<vector<bool>> &visited)
{
    if ((new_x >= 0 && new_x < n) && (new_y >= 0 && new_y < n) && (grid[new_x][new_y] == 1) && (!visited[new_x][new_y]))
    {
        return true;
    }
    else
        return false;
}

void solveforAllPath(vector<vector<int>> &grid, int x, int y, vector<vector<bool>> &visited, vector<string> &ans, string path, int n)
{
    // x represent -->row && y-->> col
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    // D L R U

    // for down row+1, col
    if (isSafetoMove(x + 1, y, n, grid, visited))
    {
        visited[x][y] = true;
        solveforAllPath(grid, x + 1, y, visited, ans, path + "D", n);
        visited[x][y] = false;
    }

    // for left row, col-1
    if (isSafetoMove(x, y - 1, n, grid, visited))
    {
        visited[x][y] = true;
        solveforAllPath(grid, x, y - 1, visited, ans, path + "L", n);
        visited[x][y] = false;
    }

    // for right row, col+1
    if (isSafetoMove(x, y + 1, n, grid, visited))
    {
        visited[x][y] = true;
        solveforAllPath(grid, x, y + 1, visited, ans, path + "R", n);
        visited[x][y] = false;
    }

    // for up row-1, col
    if (isSafetoMove(x - 1, y, n, grid, visited))
    {
        visited[x][y] = true;
        solveforAllPath(grid, x - 1, y, visited, ans, path + "U", n);
        visited[x][y] = false;
    }
}
vector<string> ratInMazeAllPath(vector<vector<int>> &grid, int n)
{
    if (grid[0][0] == 0)
        return {"-1"};
    vector<string> ans;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    string path = "";
    solveforAllPath(grid, 0, 0, visited, ans, path, n);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> grid;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        grid.push_back(temp);
    }

    vector<string> ans = ratInMazeAllPath(grid, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}