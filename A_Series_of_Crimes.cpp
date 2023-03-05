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
    int n, m, i, j;
    cin >> n >> m;
    char a[n + 1][m + 1];
    map<int, int> row;
    map<int, int> col;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '*')
            {
                row[i]++;
                col[j]++;
            }
        }
    }
    for (auto e : row)
    if (e.second == 1)
        cout << e.first << ss;
        // cout << e.first << ss << e.second << endl;
    for (auto e : col)
    if (e.second == 1)
        cout << e.first << endl;
        // cout << e.first << ss << e.second << endl;

    return 0;
}