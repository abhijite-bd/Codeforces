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
    ll t, n, i, j, ans, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ll a[n], b[n];
        ll sum = 0, same = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int flag = 0;
        for (i = 0; i < n-1; i++)
        {
            int x = a[i] + k;
            if (binary_search(a + i + 1, a + n, x))
            {
                flag = 1;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}