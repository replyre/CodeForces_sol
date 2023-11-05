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
    vector<pair<int, int>> p{{0, 0}, {0, INT_MAX}};
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        if (a > p[0].second)
        {
            p[0] = {i, a}; // get the greatest
        }
        if (a <= p[1].second)
        {
            p[1] = {i, a}; // get the smallest
        }
    }

    // maths as per question (hit and trial)
    if (p[0] > p[1])
    {
        cout << (p[0].first - 1) + (n - p[1].first) - 1;
    }
    else
        cout << (p[0].first - 1) + (n - p[1].first);

    return 0;
}