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
    ll t, a, b, n, g, p;
    cin >> t;
    while (t--)
    {
        int i = 1;
        cin >> n;
        ll a[n + 1];
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        i = 1;

        int flag = 1;
        while (i <= n)
        {
            if (flag)
            {
                a[i] = a[i + 1] * 2;
                i += 2;
            }
            else
            {
                a[i] = a[i - 1] * 2;
                i++;
            }
            flag = 1 - flag;
        }
        for (i = 1; i <= n; i++)
        {
            cout << a[i] << ss;
        }
        cout << endl;
    }
    return 0;
}