#include <bits/stdc++.h>
using namespace std;
int main()
{
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
