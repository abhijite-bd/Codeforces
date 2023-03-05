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
    int n, i, j, k, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        int low, up, sp;
        low = up = sp = 1;
        for (i = 0; i < n; i++)
        {
            if (islower(s[i]))
                low = 0;
            else if (isupper(s[i]))
                up = 0;
            else
                sp = 0;
        }
        int ans = low + up + sp;
        if (n + ans < 8)
            ans += (8 - n - ans);
        cout << ans << endl;
    }
    return 0;
}