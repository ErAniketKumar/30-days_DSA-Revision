#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        bool flaga = false;
        bool flagb = false;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= d)
            {
                flagb = false;
                if (flaga == false)
                {
                    flaga = true;
                    if (count > 0)
                    {
                        count++;
                    }
                }
            }
            else
            {
                flaga = false;
                if (flagb == false)
                {
                    flagb = true;
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}
