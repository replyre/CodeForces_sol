#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int_t;cin>>_t; while(_t--)
    long long n, m;
    cin >> n >> m;

    if (m <= (n + 1) / 2)
    {                      // check wherether odd or even;
        cout << m * 2 - 1; // for odd
    }
    else
    {
        cout << (m - (n + 1) / 2) * 2; // for even
    }

    return 0;
}