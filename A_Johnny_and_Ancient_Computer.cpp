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
    ll t, a, b, i, j, k, l;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        ll ans = 0;
        while (a != b)
        {
            if (a * 2 <= b)
            {
                ans++;
                a *= 2;
            }
            else
                break;
        }
        if (a != b)
            cout << -1 << endl;
        else
        {
            ll r8 = ans / 3;
            ans %= 3;
            ll r2 = ans / 2;
            ans %= 2;

            cout << ans + r8 + r2 << endl;
        }
    }
    return 0;
}