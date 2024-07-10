#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int nearVal = 0;
        for (int i = 2; i <= x * x; i *= 2)
        {

            if (i >= x)
            {
                nearVal = i;
                break;
            }
        }
        cout << nearVal << endl;
    }
    return 0;
}
