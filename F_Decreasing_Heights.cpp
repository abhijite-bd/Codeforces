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
const int N = 105;
const int M = 1e9 + 7;
ll a[N][N];
ll dp[N][N];
ll func(int i, int j, ll val)
{

    if (a[i][j] < val)
        return dp[i][j] = 1e18;
    if (i >= n or j >= m)
        return 1e18;

    if (dp[i][j] != -1)
        return dp[i][j];

    ll change = a[i][j] - val;
    if (i == n - 1 and j == m - 1)
        return dp[i][j] = change;
    return dp[i][j] = change + min(func(i + 1, j, val + 1), func(i, j + 1, val + 1));
}
int main()
{
    ll t, i, j, k, l;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        ll ans = 1e18;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                memset(dp, -1, sizeof(dp));
                ll firstval = a[i][j] - (i + j);
                ans = min(ans, func(0, 0, firstval));
            }
        }
        cout << ans << endl;
    }
    return 0;
}