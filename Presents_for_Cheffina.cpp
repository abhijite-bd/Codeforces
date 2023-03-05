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
    fast();
    ll t, n, r, d, i;
    cin >> t;
    // vector<pair<ll, ll>> v;
    // ll c = 0;
    // for (i = 1; i <= 70; i++)
    // {
    //     v.pb({i, i - c});
    //     if (i % 4 == 0)
    //         c++;
    // }
    // for (auto e : v)
    //     cout << e.first << ss << e.second << endl;
    while (t--)
    {
        cin >> n;
  
            cout << n - n / 5 ;
        cout << endl;
    }
    return 0;
}