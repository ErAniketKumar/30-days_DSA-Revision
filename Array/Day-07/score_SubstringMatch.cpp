#include <bits/stdc++.h>
using namespace std;

// brootforce;

// int scoreCalculate(string &s, int x, int y)
// {
//     vector<int> res;

//     while (true)
//     {
//         int count = 0;

//         if (x > y)
//         {
//             // ab priority
//             string::size_type pos = s.find("ab");
//             while (pos != string::npos)
//             {
//                 s.erase(pos, 2);
//                 count += x;
//                 pos = s.find("ab");
//             }

//             // Handle remaining "ba"
//             pos = s.find("ba");
//             while (pos != string::npos)
//             {
//                 s.erase(pos, 2);
//                 count += y;
//                 pos = s.find("ba");
//             }
//             res.push_back(count);
//         }
//         else
//         {
//             // ba priority
//             string::size_type pos = s.find("ba");
//             while (pos != string::npos)
//             {
//                 s.erase(pos, 2);
//                 count += y;
//                 pos = s.find("ba");
//             }

//             // Handle remaining "ab"
//             pos = s.find("ab");
//             while (pos != string::npos)
//             {
//                 s.erase(pos, 2);
//                 count += x;
//                 pos = s.find("ab");
//             }
//             res.push_back(count);
//         }

//         if (s.find("ab") == string::npos && s.find("ba") == string::npos)
//         {
//             cout << s << endl;
//             break;
//         }
//     }

//     int sum = accumulate(res.begin(), res.end(), 0);
//     return sum;
// }

int scoreCalculate(string &s, int x, int y)
{
    stack<char> st;
    int score = 0;
    if (x < y)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (!st.empty() && s[i] == 'a' && st.top() == 'b')
            {
                score += y;
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        s = "";
        while (!st.empty())
        {
            s += st.top();
            st.pop();
        }
        reverse(s.begin(), s.end());

        for (int i = 0; i < s.size(); i++)
        {
            if (!st.empty() && st.top() == 'a' && s[i] == 'b')
            {
                score += x;
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (!st.empty() && st.top() == 'a' && s[i] == 'b')
            {
                score += x;
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }

        s = "";
        while (!st.empty())
        {
            s += st.top();
            st.pop();
        }
        reverse(s.begin(), s.end());

        for (int i = 0; i < s.size(); i++)
        {
            if (!st.empty() && s[i] == 'a' && st.top() == 'b')
            {
                score += y;
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
    }
    return score;
}

int main()
{
    string s;
    cin >> s;
    int x, y;
    cin >> x >> y;
    cout << scoreCalculate(s, x, y) << endl;
    return 0;
}
