#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, string> &a, pair<int, string> &b)
{
    return a.first > b.first;
}
vector<string> sortPeople(vector<string> &names, vector<int> &heights)
{
    vector<pair<int, string>> vp;
    for (int i = 0; i < names.size(); i++)
    {
        vp.push_back({heights[i], names[i]});
    }
    sort(vp.begin(), vp.end(), comp);

    vector<string> ans;
    for (int i = 0; i < vp.size(); i++)
    {
        ans.push_back(vp[i].second);
    }
    return ans;
}

int main()
{

    int size;
    cin >> size;
    vector<int> height;
    vector<string> name;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        string nm;
        cin >> nm;
        name.push_back(nm);
        height.push_back(x);
    }

    vector<string> namesort = sortPeople(name, height);

    for (int i = 0; i < namesort.size(); i++)
    {
        cout << namesort[i] << " ";
    }
    cout << endl;

    return 0;
}