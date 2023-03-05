#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (x == 0 and y == 0)
            cout << 0 << endl;
        else
        {
            int total = x * x + y * y;
            int sq = sqrt(total);
            if (sq * sq == total)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
}