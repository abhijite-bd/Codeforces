/*
███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
███████████████████████████████████████            ████             ████   ███████   ██████████████████████████████████████████
████████████████████████████████████████████████   ████   ███████   ████   ███████   ██████████████████████████████████████████
████████████████████████████████████████████████   ████   ███████   ████   ███████   ██████████████████████████████████████████
████████████████████████████████████████████████   ████   ███████   ████             ██████████████████████████████████████████
███████████████████████████████████████  ███████   ████   ███████   █████████   ███████████████████████████████████████████████
███████████████████████████████████████  ███████   ████   ███████   █████████   ███████████████████████████████████████████████
███████████████████████████████████████            ████             █████████   ███████████████████████████████████████████████
███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
███████████████████████            ████   █████████   ████             ████            ████             ███████████████████████
███████████████████████   █████████████   █████████   ████   ███████   ████   █████████████   █████████████████████████████████
███████████████████████   █████████████   █████████   ████   ███████   ████   █████████████   █████████████████████████████████
███████████████████████            ████               ████             ████           █████            ████████████████████████
████████████████████████████████   ████   █████████   ████   █████   ██████   █████████████   █████████████████████████████████
████████████████████████████████   ████   █████████   ████   ██████   █████   █████████████   █████████████████████████████████
███████████████████████            ████   █████████   ████   ███████   ████            ████             ███████████████████████
███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
███████████   █████   ████             ████   ████            ████   ████████   ████      ██████   ████              ██████████
███████████   ████   █████   ███████   ████   ████   █████████████   ████████   ████   █   █████   ████   ████████   ██████████
███████████   ███   ██████   ███████   ████   ████   █████████████   ████████   ████   ██   ████   ████   ████████   ██████████
███████████        ███████             ████   ████            ████              ████   ███   ███   ████              ██████████
███████████   ███   ██████   █████   ██████   █████████████   ████   ████████   ████   ████   ██   ████   ████████   ██████████
███████████   ████   █████   ██████   █████   █████████████   ████   ████████   ████   █████   █   ████   ████████   ██████████
███████████   █████   ████   ███████   ████   ████            ████   ████████   ████   ██████      ████   ████████   ██████████
███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
█████              ████             ████   █████████   ████   ████             ████   ████               ████             █████
█████   ████████   ████   ████████  ████   █████████   ████   ██████████████   ████   ██████████   ██████████   ███████████████
█████   ████████   ████   ████████  ████   █████████   ████   ██████████████   ████   ██████████   ██████████   ███████████████
█████              ████             ████               ████   ██████████████   ████   ██████████   ██████████            ██████
█████   ████████   ████   ████████  ████   █████████   ████   ████   ███████   ████   ██████████   ██████████   ███████████████
█████   ████████   ████   ████████  ████   █████████   ████   ████   ███████   ████   ██████████   ██████████   ███████████████
█████   ████████   ████             ████   █████████   ████   ████             ████   ██████████   ██████████             █████
███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
*/
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
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    ll t, n, i, j, k, l, one, zero;
    cin >> t;
    while (t--)
    {
        cin >> n;
        one = 0, zero = 0;
        ll ans = 0;
        ll a[n], b[n];
        int locone = -1, loczero = -1;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                ans += one;
            if (a[i])
            {
                one++;
                loco = i;
            }
            else if (a[i] == 0 and locz == -1)
                locz = i;
        }
        if (loco != -1)
        {
            a[loco] = 0;
            ll p = 0, one = 0;
            for (i = 0; i < n; i++)
            {
                if (a[i] == 0)
                    p += one;
                if (a[i] == 1)
                    one++;
            }
            ans = max(ans, p);
            a[loco] = 1;
        }
        if (locz != -1)
        {
            a[locz] = 1;
            ll p = 0, one = 0;
            for (i = 0; i < n; i++)
            {
                if (a[i] == 0)
                    p += one;
                if (a[i] == 1)
                    one++;
            }
            ans = max(ans, p);
        }
        cout << ans << endl;
    }
    return 0;
}