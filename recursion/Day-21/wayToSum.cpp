#include <bits/stdc++.h>
using namespace std;

//this is not a optimal solution 
//this question is done by dynamic programmin to reduce time complexity

int waytoSum(vector<int> &arr, int sum)
{
    if (sum == 0)
        return 1;
    if(sum<0)
        return 0;    

    int ans =0;
    for(int i=0;i<arr.size();i++)
    {
        ans+=waytoSum(arr, sum-arr[i]);
    }
    return ans;
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
    int sum;
    cin >> sum;
    cout << waytoSum(arr, sum) << endl;

    return 0;
}