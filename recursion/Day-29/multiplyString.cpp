#include <bits/stdc++.h>
using namespace std;

string addition(string x, string y)
{
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    int carry = 0;
    string sum = "";
    int maxLength = max(x.size(), y.size());

    for (int i = 0; i < maxLength; i++)
    {
        int p = i < x.size() ? (x[i] - '0') : 0;
        int q = i < y.size() ? (y[i] - '0') : 0;
        int currentSum = p + q + carry;
        sum += to_string(currentSum % 10);
        carry = currentSum / 10;
    }

    if (carry > 0)
    {
        sum += to_string(carry);
    }

    reverse(sum.begin(), sum.end());
    return sum;
}
string helper(int n, string s)
{
    int carry = 0;
    string res = "";
    for (int i = s.size() - 1; i >= 0; i--)
    {
        int temp = (s[i] - '0') * n + carry;
        res += to_string(temp % 10);
        carry = ((s[i] - '0') * n + carry) / 10;
    }
    if (carry > 0)
    {
        res += to_string(carry);
    }
    reverse(res.begin(), res.end());
    // cout << res << " ";
    return res;
}

string multiplyString(string s1, string s2)
{
    vector<string> mul;
    string sum = "0";
    string x = s1.size() > s2.size() ? s1 : s2;
    string y = s1.size() > s2.size() ? s2 : s1;
    for (int i = y.size() - 1; i >= 0; i--)
    {
        string temp = helper(y[i] - '0', x);
        mul.push_back(temp);
    }
    for (int i = 0; i < mul.size(); i++)
    {
        int k = i;
        while (k--)
        {
            mul[i] += '0';
        }
    }

    for (int i = 0; i < mul.size(); i++)
    {
        sum = addition(sum, mul[i]);
        // cout << mul[i] << endl;
    }

    return sum;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    string ans = multiplyString(s1, s2);
    cout << ans << endl;
    return 0;
}