#include <bits/stdc++.h>
using namespace std;

//not optmize --- for optimize use dp 
//time complexity = 2^n
void prefectSumCount(vector<int> &arr, int index, int &count, int sum, int target)
{
    if (index == arr.size())
    {
        if (sum == target)
        {
            count++;
        }
        return;
    }
    //take
    prefectSumCount(arr, index+1, count, sum+arr[index], target);
    prefectSumCount(arr, index+1, count, sum,target);

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
    int target;
    cin >> target;
    int count = 0;
    prefectSumCount(arr, 0, count, 0, target);
    cout << count << endl;
    return 0;
}