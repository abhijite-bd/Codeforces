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
    fast();
    string s;
    cin >> s;
    int t, n, i, j, k, l, r;
    cin >> t;
    while (t--)
    {
        cin >> l >> r >> k;
        k = k % (r - l + 1);
        string st = s.substr(l - 1, r - l + 1);
        n = r - l + 1;
        for (i = 0; i < k; i++)
        {
            st = st[n - 1] + st;
            st.pop_back();
        }
        s = s.substr(0, l - 1) + st + s.substr(r, s.size() - r);
    }
    cout << s << endl;
    return 0;
}