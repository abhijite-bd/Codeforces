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
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    long long n, i, j, k, l;
    cin >> n;
    ll g[n + 1][n + 1];
    vector<int> order(n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> g[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        cin >> order[i];
    }
    vector<ll> ans;
    reverse(all(order));
    for (k = 0; k < n; k++)
    {
        int p = order[k];
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                g[i][j] = min(g[i][j], g[i][p] + g[p][j]);
            }
        }
        ll sum = 0;
        for (i = 0; i <= k; i++)
        {
            for (j = 0; j <= k; j++)
            {
                sum += g[order[i]][order[j]];
            }
        }
        ans.pb(sum);
    }
    reverse(all(ans));
    for (i = 0; i < n; i++)
    {
        cout << ans[i] << ss;
    }
    return 0;
}