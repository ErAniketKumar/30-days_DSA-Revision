#include <bits/stdc++.h>
using namespace std;

char matchMinIdexVal(string s1, string s2)
{
    unordered_map<char, int> m;
    for (int i = 0; i < s1.size(); i++)
    {
        if (m.find(s1[i]) == m.end())
        {
            m[s1[i]] = i;
        }
    }
    int mini = INT_MAX;
    bool flag = false;
    for (int i = 0; i < s2.size(); i++)
    {
        auto it = m.find(s2[i]);
        if (it != m.end())
        {
            flag = true;
            mini = min(mini, (*it).second);
        }
    }
    if (flag)
        return s1[mini];
    else
        return 0;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << matchMinIdexVal(s1, s2) << endl;
    return 0;
}