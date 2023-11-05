#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define forn(i, n) for (int i = 0; i < int(n); i++)

// freopen('input.txt', 'r', stdin);
// freopen('output.txt', 'w', stdout);
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;cin>>_t; while(_t--)

    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    int ans = INT_MAX;
    for (int i = 0; i <= m - n; i++)
    {
        ans = min(ans, v[i + n - 1] - v[i]);
    }

    if (ans == INT_MAX)
    {
        cout << 0;
        return 0;
    }
    cout << ans;
    return 0;
}