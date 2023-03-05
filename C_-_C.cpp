#include <bits/stdc++.h>
#define ss ' '
#define ll long long int
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
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
const int N = 2e5 + 10;
const int M = 1e9 + 7;
string s[100];
int n, m, i, j, k, l, ans;
bool issafe(int i, int j)
{
    if (s[i][j] == '*')
        return 0;
    if (i - 1 >= 0 and s[i - 1][j] == '*')
        return 0;
    if (i + 1 < n and s[i + 1][j] == '*')
        return 0;
    if (j - 1 >= 0 and s[i][j - 1] == '*')
        return 0;
    if (j + 1 < m and s[i][j + 1] == '*')
        return 0;
    return 1;
}
int main()
{
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    ans = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (issafe(i, j))
                ans++;
        }
    }
    cout << ans;
    return 0;
}