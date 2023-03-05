#include <bits/stdc++.h>
#define ll long long int
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define ss ' '
#define fast()                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL)
#define max3(a, b, c) max(max(a, b), c)
#define min3(a, b, c) min(min(a, b), c)
#define pb push_back
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define endl '\n'
using namespace std;
int main()
{
    int t, x, y, a, b, n, i, j;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (x == y)
            cout << 1 << ss << 1 << endl;
        else if (x > y)
            cout << 0 << ss << 0 << endl;
        else
        {
            if (y % x == 0)
                cout << 1 << ss << y / x << endl;
            else
                cout << 0 << ss << 0 << endl;
        }
    }
    return 0;
}