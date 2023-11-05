#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int_t;cin>>_t; while(_t--)

    int a, b, c;
    cin >> a >> b >> c;

    int e1 = a + b * c;
    int e2 = a * (b + c);
    int e3 = a * b * c;
    int e4 = (a + b) * c;
    int e5 = a + b + c;

    cout << max(e5, max(e4, max(e3, max(e1, e2))));

    return 0;
}