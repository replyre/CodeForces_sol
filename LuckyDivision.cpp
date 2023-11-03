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
    vector<int> validSpace{4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    int n;
    cin >> n;
    for (int i = 0; i < validSpace.size(); i++)
    {
        if (n % validSpace[i] == 0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}