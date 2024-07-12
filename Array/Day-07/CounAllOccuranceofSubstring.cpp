#include <bits/stdc++.h>
using namespace std;
int countAll_occuranceofSubStr(string s, string sub)
{
    int count = 0;
    string::size_type pos = s.find(sub);
    while (pos != string::npos)
    {
        count++;
        pos = s.find(sub, pos + sub.size());
    }
    return count;
}
int main()
{
    string s, sub;
    cin >> s >> sub;
    cout << countAll_occuranceofSubStr(s, sub) << endl;
    return 0;
}
