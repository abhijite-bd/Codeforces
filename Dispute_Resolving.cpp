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
    int t, n, i, j, k, l;
    string s1, s2, s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        int ans = 1;
        for (i = 1; i <= n; i++)
        {
            for (j = 0; j < n - i + 1; j++)
            {
                s1 = s.substr(j, i);
                s2 = s1;
                reverse(all(s2));
                if (s1 == s2)
                {
                    ans = max(ans,(int) s1.size());
                }
                // cout << s1 << endl;
            }
        }
        cout << ans << endl;
    }
    return 0;
}