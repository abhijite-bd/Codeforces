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
void binary(int n)
{
    string s = "";
    while (n != 0)
    {
        s += to_string(n % 2);
        n /= 2;
    }
    reverse(all(s));
    cout << s << endl;
}
int main()
{
    binary(INT_MAX);
    ll t, n, i, j, k, l, r;
    cin >> n >> t;
    ll a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        binary(a[i]);
    }

    cin >> t;
    while (t--)
    {
        cin >> l >> r;
    }
    return 0;
}