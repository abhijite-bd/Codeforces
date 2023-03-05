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
    int t, i, j, k, r, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 3)
        {
            cout << "3 2 1\n";
            cout << "1 3 2\n";
            cout << "3 1 2\n";
        }
        else
        {

            int a[n + 2];
            for (i = 1; i <= n; i++)
            {
                a[i] = i;
            }
            a[2] = 3;
            a[3] = 2;
            cout << "1 3 2 ";
            for (i = 4; i <= n; i++)
            {
                cout << a[i] << ss;
            }
            cout << endl;
            k = 2;
            int p = n;
            while (p--)
            {
                for (i = k, j = 1;; i++, j++)
                {
                    r = i % n;
                    if (r == 0)
                        r = n;
                    cout << a[r] << ss;
                    if (j == n)
                        break;
                }
                cout << endl;
                k++;
                if (p == 1)
                    break;
            }
        }
    }
    return 0;
}