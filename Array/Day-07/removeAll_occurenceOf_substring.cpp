#include <bits/stdc++.h>
using namespace std;
void removeAllOccurenceOfSubString(string &s, string sub)
{
    string::size_type pos = s.find(sub);
    
    while (pos != string::npos)
    {
        s.erase(pos, sub.size());
        pos = s.find(sub);
    }
}
int main()
{
    string s;
    cin >> s;
    string sub;
    cin >> sub;
    removeAllOccurenceOfSubString(s, sub);
    cout << s << endl;
    return 0;
}