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
#define pi 3.141592653589793
#define case cout << "Case " << cs++ << ": "
using namespace std;
ll cs = 1;
const int N = 2e5 + 10;
const int M = 1e9 + 7;
int main()
{
    ll t, n, i, j, k, l, r;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        l = 0, r = n - 1;
        int mn = 1, mx = n;
        while (l < r)
        {
            if (a[l] == mn)
            {
                l++;
                mn++;
            }
            else if (a[r] == mx)
            {
                r--;
                mx--;
            }
            else if (a[l] == mx)
            {
                mx--;
                l++;
            }
            else if (a[r] == mn)
            {
                mn++;
                r--;
            }
            else
                break;
        }

        if (l < r)
            cout << l + 1 << ss << r + 1 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}