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
#define pi 3.14159265359
using namespace std;
int main()
{
    ll t, x, y, n, p, i, l, j;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> n >> p;
        if (x * n > p)
            cout << -1 << endl;
        else
        {
            ll nb = n, pb;
            p -= n * x;
            pb = min(n, p / (y - x));
            nb -= pb;
            cout << nb << ss << pb << endl;
        }
    }
    return 0;
}