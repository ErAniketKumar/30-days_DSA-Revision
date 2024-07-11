#include <bits/stdc++.h>
using namespace std;

// brootforce
 int subArraySize(vector<int> &arr, int target)
 {
     int res = 0;
     for (int i = 0; i < arr.size(); i++)
     {
         int sum = 0;
         for (int j = i; j < arr.size(); j++)
         {
             sum += arr[j];
             if (sum == target)
             {
                 res = max(res, ((j - i) + 1));
             }
         }
     }
     return res;
 }

// wrong ans;
//  int subArraySize(vector<int> &arr, int target) {
//     int res=0;
//     for(int i = 0;i<arr.size();i++) {
//         int sum=0;
//         int j=i;
//         while(target>=sum) {
//             sum+=arr[j];
//             if(sum==target) {
//                 res= max(res, (j-i)+1);
//             }
//             j++;
//         }
//     }
//     return res;
//  }

// prefix sum approach
int subArraySize(vector<int> &arr, int target)
{
    int len = 0;
    map<int, int> m;
    m[0] = -1;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (m.find(sum - target) != m.end())
        {
            len = max(len, i - m[sum - target]);
        }
        if (m.find(sum) == m.end())
        {
            m[sum] = i;
        }
    }
    return len;
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
    cout << subArraySize(arr, target) << endl;
    return 0;
}