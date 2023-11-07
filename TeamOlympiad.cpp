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

    int n;
    cin >> n;
    vi v1, v2, v3;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
            v1.push_back(i + 1);
        if (x == 2)
            v2.push_back(i + 1);
        if (x == 3)
            v3.push_back(i + 1);
    }
    int mini = min(v1.size(), min(v2.size(), v3.size()));
    if (mini == 0)
        cout << 0;
    else
    {
        cout << mini << endl;

        for (int i = 0; i < mini; i++)
        {
            cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;
        }
    }
    return 0;
}