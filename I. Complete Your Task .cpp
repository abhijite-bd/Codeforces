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
    ll t, x, y, i, n;
    cin >> t;
    while (t--)
    {
        vector<ll> v;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> x >> y;
            v.pb(y - x);
        }
        cout<<accumulate(all(v),0LL);
        // for (auto e : v)
        //     cout << e << endl;
        int f = 1;
        for (i = 0; i < n - 1; i++)
        {
            if (i == 0)
            {
                if (v[i] < 0)
                {
                    if (v[n - 1] + v[i] < 0)
                        f = 0;
                }
            }
            if(v[i]<0);
        }
        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}