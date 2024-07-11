#include <bits/stdc++.h>
using namespace std;
vector<int> prefixSum (vector<int>&arr)
{
    vector<int>pre(arr.size(),0);
    pre[0]=arr[0];
    for(int i=1;i<arr.size();i++)
    {
        pre[i]=pre[i-1]+arr[i];
    }
    return pre;
}

vector<int> suffixSum(vector<int>&arr) {
    vector<int>suf(arr.size(),0);
    suf[arr.size()-1] =arr[arr.size()-1];
    for(int i = arr.size()-2;i>=0;i--)
    {
        suf[i]=suf[i+1]+arr[i];
    }
    return suf;
}
int main()
{
    int size;
    cin >> size;
    vector<int> arr;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    vector<int> pre = prefixSum(arr);
    vector<int> suf = suffixSum(arr);
    for (int i = 0; i < pre.size(); i++)
    {
        cout << pre[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < suf.size(); i++)
    {
        cout << suf[i] << " ";
    }

    return 0;
}