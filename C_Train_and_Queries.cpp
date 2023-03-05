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
#define pi 3.14159265359
using namespace std;
int main()
{
    ll t, n, i, j, k, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ll a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<ll, ll> mp1;
        map<ll, ll> mp2;
        for (i = 0; i < n; i++)
        {
            if (mp1.find(a[i]) == mp1.end())
                mp1[a[i]] = i;
            mp2[a[i]] = i;
        }
        while (k--)
        {
            ll x, y;
            cin >> x >> y;
            if (mp1.find(x) == mp1.end() or mp2.find(y) == mp2.end())
                cout << "NO\n";
            else
            {
                ll p = mp1[x];
                ll q = mp2[y];
                if (p < q)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
        }
    }
    return 0;
}