#include <bits/stdc++.h> 
string second_repeat(vector<string> &arr, int n){
    unordered_map<string, int>m;
    for(int i=0;i<arr.size();i++)
    {
        m[arr[i]]++;
    }
    vector<pair<int, string>>v;
    for(auto x:m)
    {
        v.push_back({x.second, x.first});
    }
    sort(v.begin(), v.end());
    if(v[v.size()-2].first == v[v.size()-1].first) return "";
    return v[v.size()-2].second;
}