#include <bits/stdc++.h>
using namespace std;
int countMinDeletion(string s)
{
    stack<char> st;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' && !st.empty() && st.top() == 'b')
        {
            st.pop();
            count++;
        }
        else
        {
            st.push(s[i]);
        }
    }
    return count;
}
int main()
{
    string s;
    cin >> s;

    cout << countMinDeletion(s) << endl;
    
    return 0;
}