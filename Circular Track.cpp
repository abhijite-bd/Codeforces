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
    ll t, a, b, m, ans1, ans2;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> m;
        ans1 = a - b;
        if (ans1 < 0)
            ans2 = ans1 + m;
        else
            ans2 = m - ans1;
        // cout << ans1 << ss << ans2 << endl;
        cout << min(abs(ans1), abs(ans2)) << endl;
    }
    return 0;
}