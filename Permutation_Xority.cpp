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
    int t, n, i, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 2)
            cout << -1 << endl;
        else if (n % 2 == 1)
        {
            for (i = 1; i <= n; i++)
            {
                cout << i << ss;
            }
        }
        else
        {
            for (i = 1; i <= n; i++)
            {
                if (i == 1)
                    cout << 2 << ss;
                else if (i == 2)
                    cout << 3 << ss;
                else if (i == 3)
                    cout << 1 << ss;
                else
                    cout << i << ss;
            }
        }
        cout << endl;
    }
    return 0;
}