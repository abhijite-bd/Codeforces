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
int n, m;
int a[201][201];
int number(int x, int y)
{
    int ans = a[x][y];
    int i = x + 1, j = y + 1;
    while (i < n and j < m)
    {
        ans += a[i][j];
        i++, j++;
    }
    i = x - 1, j = y - 1;
    while (i >= 0 and j >= 0)
    {
        ans += a[i][j];
        i--, j--;
    }
    i = x + 1, j = y - 1;
    while (i < n and j >= 0)
    {
        ans += a[i][j];
        i++, j--;
    }
    i = x - 1, j = y + 1;
    while (i >= 0 and j < m)
    {
        ans += a[i][j];
        i--, j++;
    }
    return ans;
}
int main()
{
    fast();
    int t, i, j, k, l;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int mx = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                int ans = number(i, j);
                mx = max(mx, ans);
            }
        }
        cout << mx << endl;
    }
    return 0;
}