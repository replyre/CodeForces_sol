#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
#define REP(i, n) for (int i = 0; i < int(n); ++i)

const int N = (int)1e2 + 100;
int a[N];

int main()
{
    int n, d, sum = 0;
    cin >> n >> d;

    REP(i, n)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum + 10 * (n - 1) > d)
        cout << -1 << endl;
    else
        cout << (d - sum) / 5 << endl;

    return 0;
}
