#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;cin>>_t; while(_t--)
    int n, m;
    cin >> n >> m;
    int total1 = n;
    int total2 = 0;
    int count = 0;

    while (total1 >= 0)
    {
        // cout << total1 << " " << total2 << endl;
        if ((total1 + total2) % m == 0)
            count = total1 + total2;
        total1 = total1 - (2);
        total2++;
    }
    if (count == 0)
        cout << -1;
    else
        cout << count;
    return 0;
}