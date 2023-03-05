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
    ll t, n, k, x, y, mx = INT_MIN, d, i;
    cin >> n >> k;
    for (i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (y <= k)
            d = x;
        else
            d = x + k - y;
        if (d > mx)
            mx = d;
    }
    cout << mx << endl;
    return 0;
}