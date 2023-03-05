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
    fast();
    ll t, n, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a[n], pre, pos;
        int flag = 1;

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i == 0)
            {
                pre = a[i];
                continue;
            }

            if (pre > a[i])
            {
                if (i == 1)
                {
                    flag--;
                    pre = a[0];
                    swap(a[i], a[i - 1]);
                    continue;
                }
                else
                {
                    if (a[i] < a[i - 2])
                        flag = -1;
                    else
                    {
                        swap(a[i], a[i - 1]);
                        flag--;
                    }
                }
            }
            pre = a[i];
        }
        if (flag < 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}