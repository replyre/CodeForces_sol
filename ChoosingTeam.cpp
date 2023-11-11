#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;cin>>_t; while(_t--)
    int n, k;
    vector<int> teams;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (5 - x - k >= 0)
            teams.push_back(i);
    }
    cout << teams.size() / 3;
    return 0;
}
