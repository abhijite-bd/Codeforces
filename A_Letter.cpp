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
    int i, j, rmax = INT16_MIN, rmin = INT16_MAX, cmax = INT16_MIN, cmin = INT16_MAX, n, m;
    cin >> n >> m;
    char a[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '*')
            {
                rmin = min(rmin, i);
                rmax = max(rmax, i);
                cmin = min(cmin, j);
                cmax = max(cmax, j);
            }
        }
    }
    // cout<<rmin<<ss<<rmax<<endl;
    // cout<<cmin<<ss<<cmax<<endl;
    for (i = rmin; i <= rmax; i++)
    {
        for (j = cmin; j <= cmax; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}