#include <bits/stdc++.h>
using namespace std;
// one element can repeat multipla size but order is same

// [2 3 4] sum = 6
// 2 2 2 , 2 4 , 3 3 ---> 3 total ans
int targetSumElementRepeat (vector<int>&arr, int target, int index)
{
    if(target==0)
    return 1;
    if(index==arr.size() || target<0)
    return 0;

    return targetSumElementRepeat(arr, target, index+1) + targetSumElementRepeat(arr, target-arr[index], index);
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
    cout<<targetSumElementRepeat(arr,target, 0);
    return 0;
}