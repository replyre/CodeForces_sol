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
    if (n >= 0)
        cout << n;
    else
    {

        if (abs(n % 10) > abs(n / 10) % 10)
        {
            cout << n / 10;
        }
        else
        {
            cout << (n / 100) * 10 + n % 10;
        }
    }

    return 0;
}