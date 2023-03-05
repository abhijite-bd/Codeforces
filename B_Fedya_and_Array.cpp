#include <bits/stdc++.h>
#define ss ' '
#define ll long long int
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
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
#define pi 3.141592653589793
#define case cout << "Case " << cs++ << ": "
using namespace std;
ll cs = 1;
const int N = 2e5 + 10;
const int M = 1e9 + 7;
int main()
{
    ll t, n, i, j, k, l;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        cout << 2 * abs(x - y) << endl;
        for (i = y; i <= x; i++)
        {
            cout << i << ss;
        }
        for (i = x - 1; i > y; i--)
        {
            cout << i << ss;
        }
        cout << endl;
    }
    return 0;
}