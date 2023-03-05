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
    ll t, n, i, j, k, sum;
    cin >> t;
    while (t--)
    {
        sum = 0;
        cin >> n;
        vector<ll> v1(n), v2(n);
        for (i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> v2[i];
        }
        for (i = 0; i < n-1; i++)
        {
            ll x = abs(v1[i] - v1[i + 1]) + abs(v2[i] - v2[i + 1]);
            ll y = abs(v1[i] - v2[i + 1]) + abs(v2[i] - v1[i + 1]);
            sum += min(x, y);
        }
        cout << sum << endl;
    }
    return 0;
}