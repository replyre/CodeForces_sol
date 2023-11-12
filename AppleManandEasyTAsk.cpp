#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<string> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    string ans = "YES";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int up = 0;
            int down = 0;
            int right = 0;
            int left = 0;

            if (i - 1 >= 0 && arr[i - 1][j] == 'o')
                up = 1;
            if (i + 1 < n && arr[i + 1][j] == 'o')
                down = 1;
            if (j - 1 >= 0 && arr[i][j - 1] == 'o')
                left = 1;
            if (j + 1 < n && arr[i][j + 1] == 'o')
                right = 1;

            ll sum = up + down + left + right;
            if (sum % 2 == 1)
            {
                ans = "NO";
                break;
            }
        }
    }
    cout << ans;
}