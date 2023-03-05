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
    int t, n, s, r, i;
    cin >> t;
    while (t--)
    {
        cin >> n >> s >> r;
        cout << s - r << ss;
        n--;
        int p = s - r;
        for (i = 1; i <= n; i++)
        {
            if (r - 6 >= n - i and p >= 6)
            {
                r -= 6;
                cout << 6 << ss;
            }
            else if (r - 5 >= n - i and p >= 5)
            {
                r -= 5;
                cout << 5 << ss;
            }
            else if (r - 4 >= n - i and p >= 4)
            {
                r -= 4;
                cout << 4 << ss;
            }
            else if (r - 3 >= n - i and p >= 3)
            {
                r -= 3;
                cout << 3 << ss;
            }
            else if (r - 2 >= n - i and p >= 2)
            {
                r -= 2;
                cout << 2 << ss;
            }
            else
            {
                r--;
                cout << 1 << ss;
            }
            // cout << r << ss << n - i << endl;
        }
        cout << endl;
    }
    return 0;
}