#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x;
    cin >> a >> b >> c >> x;

    if ((a * b * c) > pow(x, 3))
    {
        cout << "cuboid" << endl;
    }
    else
    {
        if ((a * b * c) == pow(x, 3))
        {
            cout << "equal" << endl;
        }
        else
        {
            cout << "cube" << endl;
        }
    }
}
