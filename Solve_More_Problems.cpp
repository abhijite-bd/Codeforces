#include <bits/stdc++.h>
using namespace std;
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
ll n, m;
bool chk_coor(ll i, ll j)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
    {
        return false;
    }
    return true;
}
ll cs = 1;
const int N = 2e5 + 10;
const int M = 1e9 + 7;
int main()
{
    ll t, i, j, k, l, n;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ll a[n], b[n];
        vector<pair<ll, ll>> v;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
            v.pb({a[i] + b[i], a[i]});
        }
        sort(all(v));
        ll p = 0;
        ll ans = 0;
        int last = -1;
        for (i = 0; i < n; i++)
        {
            if (v[i].first + p <= k)
            {
                p += v[i].first;
                ans++;
                last = i;
            }
        }
        if (last == -1)
            cout << ans << endl;
        else
        {
            for (i = last + 1; i < n; i++)
            {
                if (v[i].second + p <= k)
                {
                    ans++;
                    break;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}