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
int main()
{
    int n, i, j, k, l, p, q;
    string s;
    cin >> n >> p >> q;
    cin >> s;
    n = s.size();
    if (n % p == 0)
    {
        cout << n / p << endl;
        for (i = 0; i < n; i += p)
        {
            cout << s.substr(i, p) << endl;
        }
    }
    else if (n % q == 0)
    {
        cout << n / q << endl;
        for (i = 0; i < n; i += q)
        {
            cout << s.substr(i, q) << endl;
        }
    }
    else
    {
        int flag = 0;
        int c1 = -1, c2 = -1;
        int l = p;
        for (i = 1; i * l <= n; i++)
        {
            if ((i * l) % p == 0 and (n - i * l) % q == 0)
            {
                c1 = (i * l) / p;
                c2 = (n - i * l) / q;
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            cout << c1 + c2 << endl;
            i = 0;
            while (c1--)
            {
                cout << s.substr(i, p) << endl;
                i += p;
            }
            while (c2--)
            {
                cout << s.substr(i, q) << endl;
                i += q;
            }
        }
        else
            cout << -1 << endl;
    }
    return 0;
}