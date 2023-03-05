#include <bits/stdc++.h>
#define ll long long int
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define ss ' '
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
    int t, n, x, i, j, k, l;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        if (n == 1 and x == 1)
            cout << 'a' << endl;
        else if (n % 2 == 0)
        {
            if (x <= n / 2)
            {
                string ans = "";
                for (i = 0; i < n / 2; i++)
                {
                    ans += (char)97 + (i) % x;
                }
                cout << ans;
                reverse(all(ans));
                cout << ans << endl;
            }
            else
                cout << -1 << endl;
        }
        else if (n % 2 == 1)
        {
            if (x <= (n + 1) / 2)
            {
                string ans = "";
                for (i = 0; i < n / 2; i++)
                {
                    ans += (char)97 + (i) % x;
                }
                cout << ans;
                if (x == (n + 1) / 2)
                    cout << (char)(97 + x - 1);
                else
                    cout << 'a';
                reverse(all(ans));
                cout << ans << endl;
            }
            else
                cout << -1 << endl;
        }
    }
    return 0;
}