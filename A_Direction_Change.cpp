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
    ll t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a < b)
            swap(a, b);
        int ans = 0;
        if ((a == 1 and b > 2) or (a > 2 and b == 1))
            cout << -1 << endl;
        else
        {
            ans += (min(a, b) - 1) * 2;
            if (a == b)
                cout << ans << endl;
            else
            {
                ll d = a - b;
                if (d % 2 != 0)
                    ans++;
                d/=2;
                ans += d * 4;
            cout << ans << endl;
            }
        }
    }
    return 0;
}