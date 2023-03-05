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
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int t, a, b, c, d, e, ans;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d >> e;
        double x = b - c * 1.0;
        double y = a - d * 1.0;
        ans = sqrt(x * x + y * y);
        // cout<<ans<<ss;
        if (ans < e)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}