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
    set<char> st;
    string s;
    getline(cin, s);
    // cout << s;
    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            st.insert(s[i]);
    }

    cout << st.size();
    return 0;
}