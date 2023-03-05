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
using namespace std;

int main()
{
    ll n, l, r, i, t, j;
    cin >> t;
    while (t--)
    {
        cin >> n >> l >> r;
        vector<ll> v(n);
        ll sum = 0;
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (i = 0; i < n - 1; i++)
        {
            auto x = upper_bound(v.begin() + i + 1, v.end(), r - v[i]);
            auto y = lower_bound(v.begin() + i + 1, v.end(), l - v[i]);
            // cout<<x-y<<endl;
            sum += (x - y);
        }
        cout << sum << endl;
    }
    return 0;
}