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
bool check(ll i, ll j)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
    {
        return false;
    }
    return true;
}
ll cs = 1;
const int N = 2e5 + 10;
const int M = 1e9 + 7;
ll add(int n)
{
    ll ans = 0;
    while (n)
    {
        int r = n % 10;
        if (r == 1)
            ans += 2;
        else if (r == 2)
            ans += 5;
        else if (r == 3)
            ans += 5;
        else if (r == 4)
            ans += 4;
        else if (r == 5)
            ans += 5;
        else if (r == 6)
            ans += 6;
        else if (r == 7)
            ans += 3;
        else if (r == 8)
            ans += 7;
        else if (r == 9)
            ans += 6;
        else
            ans += 6;
        n /= 10;
    }
    return ans;
}
int main()
{
    ll a, b;
    cin >> a >> b;
    ll ans = 0;

    while (a != (b + 1))
    {
        ans += add(a);
        a++;
    }
    cout << ans << endl;
    return 0;
}