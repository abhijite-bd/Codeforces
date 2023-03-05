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
    ll t, l, r;
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        ll ans = 0;
        while (l != 0 or r != 0)
        {
            ans += (r - l);
            l /= 10;
            r /= 10;
        }
        cout << ans << endl;
    }
    return 0;
}