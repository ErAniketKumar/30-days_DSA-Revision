#include <bits/stdc++.h>
using namespace std;

void helper(int n, int zeroCount, int oneCount, string temp, vector<string> &ans)
{
    if (temp.size() == n)
    {
        ans.push_back(temp);
        return;
    }

    if (zeroCount < oneCount)
    {
        temp += '0';
        helper(n, zeroCount + 1, oneCount, temp, ans);
        temp.pop_back();
    }
    temp += '1';
    helper(n, zeroCount, oneCount + 1, temp, ans);
}

vector<string> findNbit(int n)
{
    vector<string> ans;
    string temp = "";
    helper(n, 0, 0, temp, ans);
    // answer return in decreasing order;
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<string> ans = findNbit(n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}