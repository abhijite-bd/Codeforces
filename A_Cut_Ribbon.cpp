#include <bits/stdc++.h>
using namespace std;
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
#define pi 3.141592653589793
#define case cout << "Case " << cs++ << ": "
ll n, m;
bool chk_coor(ll i, ll j)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
    {
        return false;
    }
    return true;
}
const int N = 4010;
int dp[N];
int func(int n, int a, int b, int c)
{
    if (n < 0)
        return -1e9;
    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int x, y, z;
    x = func(n - a, a, b, c);
    y = func(n - b, a, b, c);
    z = func(n - c, a, b, c);
    return dp[n] = 1 + max3(x, y, z);
}
ll cs = 1;
const int M = 1e9 + 7;
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    memset(dp, -1, sizeof(dp));
    cout << func(n, a, b, c);
    
    return 0;
}