#include <bits/stdc++.h>
using namespace std;
bool IsreactAtLast(vector<int> &arr)
{
    int maxi = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        maxi= max(maxi, arr[i]+i);
        if(maxi>i)
        {

        } else {
            if(maxi==arr.size()-1)
            {

            } else return false;
        }
    }
    return true;
}
int main()
{
    int size;
    cin >> size;
    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << IsreactAtLast(v) << endl;

    return 0;
}