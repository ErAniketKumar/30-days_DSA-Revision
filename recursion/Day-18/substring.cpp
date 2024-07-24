#include <bits/stdc++.h>
using namespace std;
void helper(string str, string sub, vector<string> &ans, int index)
{
    if (index == str.size())
    {
        ans.push_back(sub);
        return;
    }
    helper(str, sub, ans, index + 1);
    sub += str[index];
    helper(str, sub, ans, index + 1);
}

int main()
{
    string str;
    cin >> str;
    string sub = "";
    vector<string> ans;
    helper(str, sub, ans, 0);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}