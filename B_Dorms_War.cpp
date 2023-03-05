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
    int t, n, i, j, m, k, l;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> n >> s >> k;
        vector<bool> v(26, 0);
        for (i = 0; i < k; i++)
        {
            char c;
            cin >> c;
            v[c - 'a'] = true;
        }
        int l = 0, ans = 0;
        for (i = 0; i < n; i++)
        {
            if (v[s[i] - 'a'])
            {
                ans = max(ans, i - l);
                l = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}