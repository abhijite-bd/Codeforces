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
int num_size(ll n)
{
    int s = 0;
    while (n != 0)
    {
        s++;
        n /= 10;
    }
    return s;
}
int main()
{
    ll t, n, i, j, k, l, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        l = num_size(n);
        if (l == 1)
        {
            if (n == 9)
                cout << 10 << endl;
            else
                cout << n + 1 << endl;
        }
        else
        {
            k = pow(10, num_size(n) - 1);
            x = n / k;
            if (x == 9)
                x = 1;
            cout << x;
            for (i = 0; i <= l; i++)
            {
                if (i == x)
                    continue;
                cout << i;
            }
            cout << endl;
        }
    }
    return 0;
}