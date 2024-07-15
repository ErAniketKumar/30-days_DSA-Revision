#include <bits/stdc++.h>
using namespace std;

int assignCookie(vector<int> &greet, vector<int> &s)
{
    int i = 0, j = 0;
    int count = 0;
    sort(greet.begin(), greet.end());
    sort(s.begin(), s.end());
    while (i < greet.size() && j < s.size())
    {
        if (greet[i] <= s[j])
        {
            count++;
            j++;
            i++;
        }
        else
        {
            i++;
        }
    }
    return count;
}
int main()
{
    int size, size2;
    cin >> size >> size2;
    vector<int> greet, s;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        greet.push_back(x);
    }
    for (int i = 0; i < size2; i++)
    {
        int x;
        cin >> x;
        s.push_back(x);
    }

    cout << assignCookie(greet, s);
    return 0;
}