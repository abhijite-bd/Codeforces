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
    ll t, a, b, m, n;
    cin >> t;
    while (t--)
    {
        ll ans;
        cin >> a >> b >> n >> m;
        if (m >= n)
        {
            cout << min(n * a, n * b) << endl;
        }
        else
        {
            ll offer = n / (m + 1);
            ll ans1 = a * offer * m;
            ll ans2 = b * n;
            if (n % (m + 1) != 0)
            {
                ll r = n % ((m + 1));
                ans1 += r * min(a, b);
            }
            // cout << ans1 << ss << ans2 << endl;
            ll ans = min(ans1, ans2);
            cout << ans << endl;
        }
    }
    return 0;
}