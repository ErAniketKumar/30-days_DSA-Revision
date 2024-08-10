#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, char> &a, pair<int, char> &b)
{
    return a.first > b.first;
}

int minimumPushes(string word)
{
    // vector<pair<char, int>> alpha = {{'a', 1}, {'b', 2}, {'c', 3}, {'d', 1}, {'e', 2}, {'f', 3}, {'g', 1}, {'h', 2}, {'i', 3}, {'j', 1}, {'k', 2}, {'l', 3}, {'m', 1}, {'n', 2}, {'o', 3}, {'p', 1}, {'q', 2}, {'r', 3}, {'s', 4}, {'t', 1}, {'u', 2}, {'v', 3}, {'w', 1}, {'x', 2}, {'y', 3}, {'z', 4}};

    unordered_map<char, int> mbyf;

    for (int i = 0; i < word.size(); i++)
    {
        mbyf[word[i]]++;
    }
    vector<pair<int, char>> sbyf;

    for (auto x : mbyf)
    {
        sbyf.push_back({x.second, x.first});
    }

    sort(sbyf.begin(), sbyf.end(), comp);
    for (int i = 0; i < sbyf.size(); i++)
    {
        cout << sbyf[i].first << " " << sbyf[i].second << endl;
    }
    // unordered_map<char, int> m;

    // for (int i = 0; i < sbyf.size(); i++)
    // {
    //     m[sbyf[i].first] = sbyf[i].second;
    // }

    // int count = 0;
    // for (int i = 0; i < word.size(); i++)
    // {
    //     auto it = m.find(word[i]);
    //     if (it != m.end())
    //     {
    //         count += (*it).second;
    //     }
    // }

    int sum = 0;
    for (int i = 0; i < sbyf.size(); i++)
    {
        if (i <= 7)
        {
            sum += sbyf[i].first;
        }
        else if (7 < i && i <= 15)
        {
            sum += (sbyf[i].first * 2);
        }
        else
        {
            sum += (sbyf[i].first * 3);
        }
    }

    return sum;
}

int main()
{
    string word;
    cin >> word;
    cout << minimumPushes(word) << endl;
    return 0;
}