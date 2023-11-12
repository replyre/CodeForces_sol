#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;cin>>_t; while(_t--)
    int n;
    cin >> n;
    int arr[n];
    int k = 0;
    int maxt = INT_MIN;
    int mint = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // for(auto e:arr)cout<<e<<" ";cout<<endl;
    for (int i = 1; i < n - 1; i++)
    {
        int y = INT_MIN;
        for (int j = 1; j < n; j++)
        {
            if (j == i)
            {
                continue;
            }
            int x = INT_MIN;
            if (j == i + 1)
            {
                x = arr[j] - arr[i - 1];
            }
            else
            {
                x = arr[j] - arr[j - 1];
            }
            y = max(y, x);
        }
        mint = min(mint, y);
    }
    cout << mint << endl;
    return 0;
}