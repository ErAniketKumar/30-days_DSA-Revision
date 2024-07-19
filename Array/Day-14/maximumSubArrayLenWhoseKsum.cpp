#include <bits/stdc++.h>
using namespace std;

// using hashing it is better solution
//  int maxLenOfKsumSubarray(vector<int> &arr, int K)
//  {
//      // prefix sum
//      for (int i = 1; i <= arr.size(); i++)
//      {
//          arr[i] = arr[i - 1] + arr[i];
//      }

//     // take a map
//     unordered_map<int, int> m;
//     m[0] = -1;
//     int len = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (m.find(arr[i] - K) != m.end())
//         {
//             len = max(len, i - m[arr[i] - K]);
//         }
//         if (m.find(arr[i]) == m.end())
//         {
//             m[arr[i]] = i;
//         }
//     }
//     return len;
// }

// using two pointer we remove extra space so it will be optimal solution

// for only positive number
int maxLenOfKsumSubarray(vector<int> &arr, int K)
{
    int i = 0, j = 0;
    int len = 0;
    int sum = 0;
    while (j < arr.size())
    {

        sum += arr[j];
        while (i <= j && sum > K)
        {
            sum -= arr[i];

            i++;
        }
        if (sum == K)
        {
            len = max(len, j - i + 1);
        }
        
        j++;
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
    int K;
    cin >> K;

    cout << maxLenOfKsumSubarray(arr, K) << endl;
    return 0;
}