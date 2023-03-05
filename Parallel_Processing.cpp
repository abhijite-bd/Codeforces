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
    int t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a[n], b[n], sum = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            b[i] = sum;
        }
        ll ans = sum;
        for (i = 0; i < n; i++)
        {
            ans = min(ans, max(b[i], sum - b[i]));
        }
        cout << ans << endl;
    }
    return 0;
}