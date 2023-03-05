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
ll ar[N];
int func(int a, int b, int c)
{
    // bool chk[N] = {0};
    ll last = 0, i;
    ll p = m;
    for (i = 0; i < n; i++)
    {
        if (ar[i] < p)
            p += (ar[i] / 2);
        else
        {
            last = i;
            break;
        }
    }
    p *= a;
    for (i = last; i < n; i++)
    {
        if (ar[i] < p)
            p += ar[i] / 2;
        else
        {
            last = i;
            break;
        }
    }
    p *= b;
    for (i = last; i < n; i++)
    {
        if (ar[i] < p)
            p += ar[i] / 2;
        else
        {
            last = i;
            break;
        }
    }
    p *= c;
    for (i = last; i < n; i++)
    {
        if (ar[i] < p)
            p += ar[i] / 2;
        else
        {
            last = i;
            break;
        }
    }
    return i;
}
int main()
{
    ll t, i;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar + n);
        int ans = 0;
        int a = 2, b = 2, c = 3;
        ans = max(ans, func(a, b, c));
        ans = max(ans, func(a, c, b));
        ans = max(ans, func(c, a, b));
        cout << ans << endl;
    }
    return 0;
}