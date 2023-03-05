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
    // fast();
    // ll n, i, j;
    // cin >> n;
    // ll a[n], ans = 0, d[n] = {0};
    // for (i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // for (i = 0; i < n - 1; i++)
    // {
    //     for (j = i+1; j < n; j++)
    //     {
    //         if (i == j)
    //             continue;
    //         else
    //         {
    //             ll t = a[i] + a[j];
    //             if (ceil(log2(t)) == floor(log2(t)))
    //             {
    //                 // cout<<"YES"<<endl;
    //                 d[i] = 1, d[j] = 1;
    //             }
    //         }
    //     }
    // }
    // for (i = 0; i < n; i++)
    // {
    //     if (d[i] == 0)
    //         ans++;
    // }
    // cout << ans << endl;

    ll n, i, j, ans = 0;
    cin >> n;
    vector<ll> v(n);
    map<ll, int> m;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    for (i = 0; i < n; i++)
    {
        int f = 0;
        for (j = 0; j < 32; j++)
        {
            ll x = (1 << j) - v[i];
            if ((m[x] > 1 or (m[x] == 1 and x != v[i])))
            {
                f = 1;
                break;
            }
        }
        if (!f)
            ans++;
    }

    cout << ans << endl;

    return 0;
}