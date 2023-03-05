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
#define MOD 998244353
ll n, m;
bool chk_coor(ll i, ll j)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
    {
        return false;
    }
    return true;
}
ll fact(ll n);

ll nCr(ll n, ll r)
{
    ll p = (fact(r) * fact(n - r));
    if (p == 0)
        return 0;
    return fact(n) / p;
}
ll fact(ll n)
{
    if (n == 0)
        return 1;
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = res * i;
    return res;
}
ll cs = 1;
const int N = 2e5 + 10;
const int M = 1e9 + 7;
int main()
{
    ll t, n, m, i, j, k, l, r;
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        k = l;
        ll ans = 0;
        ll st = 0;
        while (k <= r)
        {
            ans++;
            k *= 2;
        }
        ll p=(1<<ans);
        for (i = l; i < r; i++)
        {
            
            else
                break;
        }
        cout << ans << ss << st << endl;
    }
    return 0;
}