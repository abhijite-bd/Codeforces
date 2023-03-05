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
    ll t, n, i, j, k, l;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans=0;
        for (i = 1; i < n - 1; i++)
        {
            if (a[i] > a[i - 1] and a[i] > a[i + 1])
            {
                ans++;
                if (i + 2 < n)
                {
                    if (a[i + 2] < a[i])
                        a[i + 1] = a[i];
                    else
                    {
                        a[i + 1] = a[i + 2];
                    }
                }
                else
                {
                    a[i + 1] = a[i];
                }
            }
        }
        cout<<ans<<endl;
        for (auto e : a)
            cout << e << ss;
        cout << endl;
    }
    return 0;
}