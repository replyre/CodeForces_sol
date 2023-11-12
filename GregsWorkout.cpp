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
    vi v;

    forn(i, v.size())
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int c, b, bk;
    c = b = bk = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (i % 3 == 1)
            c += x;
        else if (i % 3 == 2)
            b += x;
        else
            bk += x;
    }

    if (c > bk && c > b)
        cout << "chest";
    else if (b > bk && b > c)
        cout << "biceps";
    else
        cout << "back";

    return 0;
}