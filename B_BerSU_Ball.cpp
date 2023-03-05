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
    int n, m, i, j, k, l, ans;
    ans = 0;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for (i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    map<int, int> mp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (abs(a[i] - b[j]) <= 1 and mp[j] == 0)
            {
                ans++;
                mp[j] = 1;
                break;
                // cout << a[i] << ss << b[j] << endl;
            }
        }
    }
    cout << ans << endl;
    return 0;
}