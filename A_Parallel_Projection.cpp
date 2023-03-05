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
    int a, b, f, g, t, n, i, j, k, l, w, d, h;
    cin >> t;
    while (t--)
    {
        cin >> w >> d >> h;
        cin >> a >> b >> f >> g;
        int ans1 = a + f + abs(b - g);
        int ans2 = abs(w - a) + abs(w - f) + abs(b - g);
        int ans3 = b + g + abs(a - f);
        int ans4 = abs(d - b) + abs(d - g) + abs(a - f);
        cout << min3(ans1, ans2, min(ans3, ans4)) + h << endl;
    }
    return 0;
}