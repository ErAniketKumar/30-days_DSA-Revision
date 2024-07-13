#include <bits/stdc++.h>
using namespace std;

// vector<int> survivedRobotsHealths(vector<int> &positions, vector<int> &healths, string directions)
// {
//     int n = positions.size();
//     vector<pair<int, vector<int>>> v(n);
//     for (int i = 0; i < positions.size(); i++)
//     {
//         v[i] = {positions[i], {i, healths[i], directions[i]}};
//     }
//     sort(v.begin(), v.end());
//     stack<pair<int, vector<int>>> st;
//     for (int i = 0; i < n; i++)
//     {
//         auto pp = v[i];
//         auto pparr = pp.second;
//         int idx = pparr[0];
//         // int dir = directions[idx];
//         // int hl = healths[idx];
//         // int pos = positions[idx];
//         while (!st.empty() && directions[idx] == 'L')
//         {
//             auto it = st.top();
//             st.pop();
//             auto vec = it.second;
//             if (vec[2] == 'R')
//             {
//                 if (healths[vec[0]] == healths[idx])
//                 {
//                 }
//                 else if (healths[vec[0]] > healths[idx])
//                 {
//                     st.push({positions[vec[0]], {vec[0], healths[vec[0]] - 1, directions[vec[0]]}});
//                 }
//                 else
//                 {
//                     st.push({positions[idx], {idx, healths[idx] - 1, directions[idx]}});
//                 }
//             }
//         }
//     }

//     vector<int> res;
//     while (!st.empty())
//     {
//         auto ss = st.top();
//         st.pop();
//         auto vec = ss.second;
//         res.push_back(vec[1]);
//     }
//     return res;
// }

vector<int> survivedRobotsHealths(vector<int> &positions, vector<int> &healths, string directions)
{
    int n = positions.size();
    vector<pair<int, vector<int>>> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = {positions[i], {i, healths[i], directions[i]}};
    }
    sort(v.begin(), v.end());

    stack<pair<int, vector<int>>> st;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (v[i].second[2] == 'R')
        {
            st.push(v[i]);
        }
        else
        {
            if (!st.empty())
            {
                while (!st.empty())
                {
                    auto tp = st.top();
                    st.pop();
                    if (tp.second[1] == v[i].second[1])
                    {
                        break;
                    }
                    else if (tp.second[1] > v[i].second[1])
                    {
                        tp.second[1]--;
                        st.push(tp);
                        break;
                    }
                    else
                    {
                        v[i].second[1]--;
                        continue;
                    }
                }
            }
            else
            {
                ans.push_back(v[i].second[1]);
            }
        }
    }
    vector<pair<int, vector<int>>> pp;
    while (!st.empty())
    {
        auto tp = st.top();
        st.pop();
        pp.push_back(tp);
    }

    reverse(pp.begin(), pp.end());

    sort(pp.begin(), pp.end());
    for (int i = 0; i < pp.size(); i++)
    {
        auto it = pp[i];

        ans.push_back(it.second[1]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int size;
    cin >> size;
    vector<int> positions, healths;
    // initially position's value are unique;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        positions.push_back(x);
    }

    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        healths.push_back(x);
    }
    string directions;
    cin >> directions;

    vector<int> res = survivedRobotsHealths(positions, healths, directions);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}