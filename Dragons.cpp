#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> dragons;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        dragons.push_back({x, y});
    }
    sort(dragons.begin(), dragons.end());
    for (auto e : dragons)
    {
        // cout << e.first << " " << e.second << endl;
        if (s > e.first)
            s += e.second;
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
