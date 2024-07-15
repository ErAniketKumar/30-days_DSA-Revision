#include <bits/stdc++.h>
using namespace std;
bool lemonadeNpeople(vector<int> &arr)
{
    int five = 0, ten = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 5)
        {
            five++;
        }
        else if (arr[i] == 10 && five >= 1)
        {
            five--;
            ten++;
        }
        else
        {
            if (five >= 1 && ten >= 1)
            {
                five--;
                ten--;
            }
            else if (five >= 3)
            {
                five -= 3;
            } else
            return false;
        }
    }
    return true;
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
    cout << lemonadeNpeople(arr);

    return 0;
}