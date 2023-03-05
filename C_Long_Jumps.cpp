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
ll a[N];
ll dp[N];
ll func(int i)
{
    if (i >= n)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    ll ans = i + a[i];
    // cout << i << ss << ans << endl;
    return dp[i] = a[i] + func(ans);
}
int main()
{
    ll t, i, j, k, l;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll mx = -1;
        memset(dp, -1, sizeof(dp));
        for (i = 0; i < n; i++)
        {
            mx = max(mx, func(i));
        }
        cout << mx << endl;
    }
    return 0;
}