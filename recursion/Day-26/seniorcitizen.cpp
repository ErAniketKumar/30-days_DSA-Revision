#include <bits/stdc++.h>
using namespace std;

// given a array of string that contain 15 characer
// first 10 char mob no and then 1 char for gender then 2 for age and two for id
// find all all that greater then 60
int countSeniors(vector<string> &details)
{
    int count = 0;
    for (auto det : details)
    {
        string age = "";
        age += det[11];
        age += det[12];
        if (stoi(age) > 60)
            count++;
    }
    return count;
}

int main()
{
    vector<string> details;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        string det;
        cin >> det;
        details.push_back(det);
    }

    cout << countSeniors(details);

    return 0;
}