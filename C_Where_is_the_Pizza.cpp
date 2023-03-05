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
#define mod 1000000000 + 7
using namespace std;
int main()
{
    int t, n, i, j, k, l;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n], b[n], d[n];
        vector<int> done(n, 0), pos;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            pos[a[i]] = i;
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> d[i];
            done[d[i]] = 1;
        }
        ll ans = 1;
        for (i = 0; i < n; i++)
        {
            if ((a[i] == b[i]) or (done[a[i] or done[b[i]]]))
                continue;
            vector<int> v;
            int curr = b[i];
            bool flag = 0;
            v.pb(a[i]);
            while (curr != a[i])
            {
                if (done[curr])
                    flag = 1;
                v.pb(curr);
                curr = b[pos[curr]];
                if (done[curr])
                    flag = 1;
            }
            if (flag == 0)
                ans = (ans * 2) % mod;
            for (auto e : v)
                done[e] = 1;
        }
        cout << ans << endl;
    }
    return 0;
}