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
bool cmp(pair<ll, int> &a, pair<ll, int> &b)
{
    return a.second > b.second;
    // return 1;
}

int main()
{
    int t, n, i, j, k, l;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<ll> v;
        map<ll, int> m;
        for (i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.pb(x);
            m[x]++;
        }
        ll ans = 0;
        for (auto e : m)
        {
            ans=max(ans,e.first+e.second);

        }        
        cout << ans-1 << endl;
    }
    return 0;
}