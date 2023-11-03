#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    if (n % 2 == 0 && n > 2)
    {
        cout << "YES";
        return 0;
    }
    else
        cout << "NO";

    return 0;
}