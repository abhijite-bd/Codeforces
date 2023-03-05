#include <bits/stdc++.h>
#define ll long long int
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define ss ' '
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
using namespace std;
int main()
{
    ll t, n, k, i, j, l;
    cin >> t;
    while (t--)
    {
        cin >> k >> n;
        ll a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        int ans = 0;
        int total = 0;
        for (i = 0; i < n and total < a[i]; i++)
        {
            ans++;
            total += (k - a[i]);
        }
        cout << ans << endl;
    }
    return 0;
}