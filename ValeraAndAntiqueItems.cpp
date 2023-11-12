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
    int n, p;
    cin >> n >> p;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int mini = INT_MAX;
        int k;
        cin >> k;
        while (k--)
        {
            int x;
            cin >> x;
            mini = min(mini, x);
        }
        if (p > mini)
            ans.push_back(i + 1);
    }

    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (auto s : ans)
    {
        cout << s
             << " ";
    }

    return 0;
}