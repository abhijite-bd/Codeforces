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
long long int solve(long long int a, long long int b, long long int c)
{
    if (a < b)
        swap(a, b);
    long long int need = a - b;
    if (need > c)
        return b + c;
    return a + (c - need) / 2;
}
ll cs = 1;
const int N = 2e5 + 10;
const int M = 1e9 + 7;
int main()
{
    long long int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        long long int ans = 1;
        ans = max(ans, solve(a, b, c));
        ans = max(ans, solve(b, c, a));
        ans = max(ans, solve(c, a, b));
        cout << ans << endl;
    }
    return 0;
}
// aaaaaa bbbbbbbbb ccccccccccccc
//     ccccccc aaaaaaaaa bbbbbbbbbbb

// alice = (pile of a) + c / 2;
// bob = (pile of b) + c / 2;