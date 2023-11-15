#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define forn(i, n) for (int i = 0; i < int(n); i++)

// freopen('input.txt', 'r', stdin);
// freopen('output.txt', 'w', stdout);
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;cin>>_t; while(_t--)
    int n;
    int m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m, 0));

    // taking input

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char x;
            cin >> x;
            grid[i][j] = x;
        }
    }
    int sum = 0; // total cakes

    // loop for row cakes calc
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'S')
            {
                count = 0;
                break;
            }

            count++;
        }
        if (count != 0)
            for (int j = 0; j < m; j++)
            {
                grid[i][j] = 'V'; // to avoid recounting
            }
        sum += count;
    }

    // loop for col cakes calc
    for (int j = 0; j < m; j++)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {

            if (grid[i][j] == 'S')
            {
                count = 0;
                break;
            }
            if (grid[i][j] != 'V')
                count++;
        }
        sum += count;
    }
    cout << endl
         << sum;
    return 0;
}
