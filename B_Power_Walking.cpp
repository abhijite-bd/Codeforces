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

    ll t, n, x, i, j, mn, mx;
    cin >> t;
    while (t--)
    {
        cin >> n;
        map<ll, ll> m;
        mx = 0;
        for (i = 0; i < n; i++)
        {
            cin >> x;
            m[x]++;
            if (mx < m[x])
                mx = m[x];
        }
        ll value = m.size();
        for (i = 0; i < n; i++)
        {
            if (i < value)
                cout << value << ss;
            else
            {
                value++;
                cout << value << ss;
            }
        }
        cout << endl;
    }
    return 0;
}