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
    vector<int> prices;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        prices.push_back(x);
    }
    int maxi = 0;

    for (int i = 0; i < n - 1; i++)
    {

        if (prices[i] > prices[i + 1])
        {
            maxi = max(prices[i] - prices[i + 1] - m, maxi);
        }
    }
    cout << maxi;
    return 0;
}