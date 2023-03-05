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
    ll t, n, i, j, pre;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a[n];
        vector<ll> v1, v2, odd, even;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even.pb(a[i]);
            else
                odd.pb(a[i]);
        }
        v1 = even;
        sort(v1.begin(), v1.end());
        v2 = odd;
        sort(v2.begin(), v2.end());
        if (v1 == even and v2 == odd)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}