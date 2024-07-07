#include <bits/stdc++.h>
using namespace std;

// array is container size is fixed in array
int main()
{
    array<int, 5> myArr{1, 2, 3, 4, 5};
    for (auto it = myArr.begin(); it != myArr.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    // iterator member function
    reverse(myArr.begin(), myArr.end());
    for (auto it = myArr.begin(); it != myArr.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    // rbegin, rend
    for (auto it = myArr.rbegin(); it != myArr.rend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (auto it = myArr.begin(); it != myArr.end(); it++)
    {
        cout << myArr.at(0);
    }
    cout << endl;
    myArr.at(2) = 10;
    cout << myArr.at(2) << endl;
    cout << myArr.size();
    return 0;
}