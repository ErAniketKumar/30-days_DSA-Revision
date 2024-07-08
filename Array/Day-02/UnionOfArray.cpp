#include <bits/stdc++.h>
using namespace std;
vector<int> findUnion(vector<int> &arr1, vector<int> &arr2)
{
    set<int> st(arr1.begin(), arr1.end());
    st.insert(arr2.begin(), arr2.end());
    vector<int> res(st.begin(), st.end());
    return res;
}
int main()
{
    int size1, size2;
    cin >> size1 >> size2;
    vector<int> arr1, arr2;
    for (int i = 0; i < size1; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
    }

    for (int i = 0; i < size2; i++)
    {
        int x;
        cin >> x;
        arr2.push_back(x);
    }
    vector<int> arr = findUnion(arr1, arr2);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}