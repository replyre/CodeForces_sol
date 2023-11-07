#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;cin>>_t; while(_t--)
    vector<int> odd;
    vector<int> even;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            even.push_back(i + 1);
        else
            odd.push_back(i + 1);
    }
    if (even.size() == 1)
        cout << even[0];
    else
        cout << odd[0];
}