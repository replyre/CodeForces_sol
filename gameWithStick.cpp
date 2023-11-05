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

    if (n > m)
        swap(n, m);
    n % 2 == 0 ? cout << "Malvika" : cout << "Akshat";
    return 0;
}