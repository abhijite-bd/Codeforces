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
#define pi 3.14159265359
using namespace std;
int main()
{
    int i, j, m, n, t, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int a[n][m];
        int v1[4] = {1, 0, 0, 1};
        int v2[4] = {0, 1, 1, 0};
        for (i = 0; i < n/2; i++)
        {
            if (i % 2 == 0)
            {
                for (j = 0; j < m; j++)
                {
                    cout << v1[j % 4] << ss;
                }
                cout << endl;
                for (j = 0; j < m; j++)
                {
                    cout << v2[j % 4] << ss;
                }
                cout << endl;
            }
            else
            {
                for (j = 0; j < m; j++)
                {
                    cout << v2[j % 4] << ss;
                }
                cout << endl;
                for (j = 0; j < m; j++)
                {
                    cout << v1[j % 4] << ss;
                }
                cout << endl;
            }
        }
    }
    return 0;
}