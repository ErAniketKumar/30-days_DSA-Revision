
#include <bits/stdc++.h> 
int maximumWeightRow(int n, int m, vector<vector<int>> &mat) {
    int maxw=0;
    for(int i=0;i<mat.size();i++)
    {
        int sum=0;
        for(int j=0;j<mat[i].size();j++)
        {
            sum+=mat[i][j];
        }
        maxw = max(maxw, sum);
    }
    return maxw;
}











// Problem statement
// Ninja has been provided a matrix 'MAT' of size 'N X M' where 'M' is the number of columns in the matrix, and 'N' is the number of rows.

// The weight of the particular row is the sum of all elements in it. Ninja wants to find the maximum weight amongst all the rows.

// Your task is to help the ninja find the maximum weight amongst all the rows.

// EXAMPLE:
// Input: 'N' = 2, 'M' = 3, 'MAT' = [[1, 2, 3], [2, 0, 0]]
// Output: 6

// The weight of first row is 1 + 2 + 3 = 6
// The weight of the second row is 2 + 0 + 0 = 2; hence the answer will be a maximum of 2 and 6, which is 6.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= 'T' <= 10
// 1 <= 'N' <= 10^2
// 1 <= 'M' <= 10^2
// 0 <= 'MAT[I][J]' <= 10^5

// Time Limit: 1 sec
// Sample Input 1 :
// 2
// 3 3
// 1 2 3
// 3 4 2
// 3 4 2
// 1 1
// 2
// Sample Output 1 :
// 9
// 2
// Explanation Of Sample Input 1 :
// For the first test case, the answer will be 9. It will be formed by the 2nd row, and it will be the maximum amongst all.

// For the first test case, as there is only one row, the answer will be its sum which is 2.
// Sample Input 2 :
// 2
// 1 3
// 1 2 3
// 4 2
// 2 2
// 3 4 
// 2 4
// 4 5
// Sample Output 2 :
// 6
// 9