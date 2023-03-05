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
    ll n, m, sum, i, t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<ll> a(n), b(m);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sum = 0;
        int j = 0;
        while (j < m)
        {
            sort(all(a));
            swap(a[0], b[j++]);
        }
        for (i = 0; i < n; i++)
        {
            sum += a[i];
        }
        cout << sum << endl;
    }

    return 0;
}