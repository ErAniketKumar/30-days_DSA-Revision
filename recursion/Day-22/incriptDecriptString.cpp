#include <bits/stdc++.h>
using namespace std;

string allnumsq(string s, int &start)
{
    string num = "";
    for (int i = start; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            num += s[i];
        }
        else
        {
            break;
        }
    }
    // cout << num << endl;
    return num;
}
string decriptString(string s)
{

    string ans = "";
    string temp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (!isdigit(s[i]))
        {
            temp += s[i];
        }
        else
        {
            string num = allnumsq(s, i);
            if (num.size() > 1)
                i += num.size() - 1;
            int frq = stoi(num);
            // cout << "frq->" << frq << endl;
            while (frq--)
            {
                ans += temp;
            }
            // cout << "temp->" << temp << endl;
            temp = "";
        }
    }
    cout << ans;
    return ans;
}
int main()
{
    string s;
    cin >> s;
    string ds = decriptString(s);
    return 0;
}