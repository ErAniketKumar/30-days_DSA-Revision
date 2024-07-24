#include <bits/stdc++.h>
using namespace std;
void helper(int n, string &st, vector<string> &ans, int left, int right)
{
    if (left + right == 2 * n)
    {
        ans.push_back(st);
        return;
    }
    if (left < n)
    {
        st += '(';
        helper(n, st, ans, left + 1, right);
        st.pop_back();
    }
    if (right < left)
    {
        // right take;
        st += ')';
        helper(n, st, ans, left, right + 1);
        st.pop_back();
    }
}
int main()
{
    int n;
    cin >> n;
    vector<string> ans;
    string st = "";
    helper(n, st, ans, 0, 0);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}