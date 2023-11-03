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
    string s;
    cin >> s;
    string valid = "hello";
    int k = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == valid[k])
            k++;

        if (k == valid.size())
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}