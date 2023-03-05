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
    fast();
    ll t, n, i, j, k, l, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<ll> v;
        for (i = 0; i < n; i++)
        {
            cin >> l;
            v.pb(l);
        }
        ll sum = accumulate(v.begin(), v.end(), 0);
        sort(all(v), greater<int>());
        ll total = 0;
        for (i = 0; i < n; i++)
        {
            v[i] += total;
            total = v[i];
        }
        // for(auto e:v)
        // cout<<e<<endl;
        while (m--)
        {
            ll x;
            cin >> x;
            // auto it = find(all(v), x);
            if (x == sum)
                cout << n << endl;
            else if (x > sum)
                cout << -1 << endl;
            // else if (it != v.end())
            //     cout << 1 << endl;
            else
            {
                // vector<ll>::iterator lower;

               auto lower = lower_bound(v.begin(), v.end(), x);
               
                cout << lower - v.begin() + 1 << endl;
            }
        }
    }
    return 0;
}