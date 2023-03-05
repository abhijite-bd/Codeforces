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
    int n, i, j, ans, sum, flag = 1;
    int sum3 = 0, sum4 = 0;
    cin >> n;
    int a[n][n];
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
            sum += a[i][j];
        }
        if (i == 0)
            ans = sum;
        if (sum != ans)
            flag = 0;
    }
    if (!flag)
    {
        cout << -1 << endl;
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
        {
            sum += a[j][i];
            if (i == j)
                sum3 += a[i][j];
            if (i + j == n - 1)
                sum4 += a[i][j];
        }
        if (sum != ans)
            flag = 0;
    }
    if (!flag or sum3!=ans or sum4!=ans)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << ans << endl;
}