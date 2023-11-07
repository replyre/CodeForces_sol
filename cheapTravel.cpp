#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int_t;cin>>_t; while(_t--)

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    if (m * a <= b)
    {
        cout << n * a << "\n";
    }
    else
    {
        cout << (n / m) * b + min((n % m) * a, b);
    }
    return 0;
}