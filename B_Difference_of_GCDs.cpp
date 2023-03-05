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
using namespace std;
int main()
{
    fast();
    ll t, n, l, r, i;
    cin >> t;
    while (t--)
    {
        cin >> n >> l >> r;
        if (n == 1)
        {
            cout << "YES\n";
            cout << l << endl;
            continue;
        }
        else
        {
            vector<ll> v;
            // ll p = 1;
            for (i = 1; i <= n; i++)
            {
                if (l % i == 0)
                    v.pb(l);
                else
                {
                    ll p = l / i;
                    p = (p + 1) * i;
                    if (p > r)
                        break;
                    v.pb(p);
                }
            }
            if (v.size() == n)
            {
                cout << "YES\n";
                for (auto e : v)
                    cout << e << ss;
                cout << endl;
            }
            else
                cout << "NO\n";
        }
    }
    return 0;
}