#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;cin>>_t; while(_t--)
    vector<vector<int>> v(5, vector<int>(5));
    // Take input from the user.
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {

            if (v[i][j])
                cout << abs(2 - i) + abs(2 - j);
        }
    }

    return 0;
}
