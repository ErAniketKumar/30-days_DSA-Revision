#include <bits/stdc++.h>
using namespace std;

void tohCal(int n, int src, int helper, int desc)
{
    if (n == 1)
    {
        cout << "move disk " << n << " from rod " << src << " to rod " << desc << endl;
        return;
    }
    tohCal(n - 1, src, desc, helper);
    cout << "move disk " << n << " from rod " << src << " to rod " << desc << endl;
    tohCal(n - 1, helper, src, desc);
}
int main()
{
    int n;
    cin >> n;
    int src = 1, desc = 2, helper = 3;
    tohCal(n, src, helper, desc);
    int steps = pow(2, n) - 1;
    cout << "Steps: " << steps << endl;
    return 0;
}