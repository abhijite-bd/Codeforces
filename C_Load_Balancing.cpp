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
bool check(ll i, ll j)
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
    ll n;
    cin >> n;
    ll a[n], i;
    ll sum = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    ll d = sum / n;
    ll r = sum % n;
    ll ans = 0;
    sort(a, a + n);
    vector<ll> v(n);
    i = n - 1;
    while (i >= 0)
    {
        v[i] = d + (r > 0 ? 1 : 0);
        r--;
        i--;
    }
    for (i = 0; i < n; i++)
    {
        ans += abs(v[i] - a[i]);
    }
    cout << ans / 2 << endl;

    return 0;
}