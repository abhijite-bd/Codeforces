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
    ll a, b, c, x, y, cat, dog, t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> x >> y;
        if (x > a)
            c -= (x - a);
        if (y > b)
            c -= (y - b);
        if (c < 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}