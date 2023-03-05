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
    fast();
    ll t, n, l, s, i, j, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> l >> s;
        ll k = l + 1;
        ll sum = k * (k + 1) / 2;
        ll start, end, ptr;
        start = 1, end = k, ptr = k;
        if (l == 1)
        {
            if (s <= n)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        int flag = 0;
        while (ptr <= n)
        {
            // cout << sum << ss;
            if (sum - s > end)
                break;
            if (sum == s)
            {
                flag = 1;
                break;
            }
            if (sum - s >= start and sum - s <= end)
            {
                flag = 1;
                break;
            }
            ptr++;
            sum += ptr;
            sum -= start;
            start++;
            end++;
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}