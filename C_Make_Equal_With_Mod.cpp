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
    ll t, n, i, j, one;
    cin >> t;
    while (t--)
    {
        one = 0;
        cin >> n;
        ll a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                one = 1;
        }
        if (one == 0)
            cout << "YES\n";
        else
        {
            sort(a, a + n);
            int flag = 0;
            for (i = 1; i < n; i++)
            {
                if (a[i] - a[i - 1] == 1)
                {
                    flag = 1;
                }
            }
            if (flag)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
    return 0;
}