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
    bool change = true;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i % 2 == 1)
                cout << "#";
            else
            {
                if (change)
                {
                    if (j == m)
                        cout << "#";
                    else
                        cout << ".";
                }
                else
                {
                    if (j == 1)
                        cout << "#";
                    else
                        cout << ".";
                }
            }
        }
        if (i % 2 == 0)
            change = !change;

        cout << endl;
    }
    return 0;
}