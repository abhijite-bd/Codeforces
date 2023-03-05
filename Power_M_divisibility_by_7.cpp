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
int main()
{
    ll n, i, j, k, l, x, y, t;
    cin >> t;
    while (t--)
    {
        cin >> n >> y;
        string s = "";
        while (n != 0)
        {
            ll r = n % 10;
            n /= 10;
            ll p = 1;
            for (i = 1; i <= y; i++)
            {
                p *= r;
                p %= 10;
                // cout << p << endl;
            }
            s += to_string(p);
        }
        reverse(all(s));
        cout << s << endl;
        ll newnum = stoll(s);
        cout << newnum << endl;
        if (newnum % 7 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}