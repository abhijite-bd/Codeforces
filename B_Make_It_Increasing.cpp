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
    int t, n, i, j, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;

        for (i = 0; i < n; i++)
        {
            for (j = 1; j < n; j++)
            {
                while (a[j - 1] >= a[j] and a[j] != 0)
                {
                    a[j - 1] /= 2;
                    ans++;
                }
            }
        }
        for (i = 0; i < n - 1; i++)
        {
            if (a[i] >= a[i + 1])
            {
                ans = -1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}