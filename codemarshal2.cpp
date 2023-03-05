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
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int t, n, i, num, ans = 0;
    cin >> t;
    while (t--)
    {
        num = 0;
        for (i = 0; i < 4; i++)
        {
            int x;
            cin >> x;
            if (x >= 5)
                num++;
        }
        if (num >= 3)
            ans++;
    }
    cout << ans << endl;
    return 0;
}