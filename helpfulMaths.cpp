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
    vector<char> val;
    for (int i = 0; i < s.size(); i += 2)
    {
        val.push_back(s[i]);
    }
    sort(val.begin(), val.end());
    for (int i = 0; i < val.size() - 1; i++)
    {
        cout << val[i] << "+";
    }
    cout << val[val.size() - 1];
    return 0;
}