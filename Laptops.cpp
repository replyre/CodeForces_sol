#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int _t;
    cin >> _t;
    while (_t--)
    {
        int x, y;
        cin >> x >> y;
        if (x < y || y > x)
        {
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";

    return 0;
}