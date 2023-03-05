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
    int n, i, j, x, t;
    string s1, s2;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s1 >> s2;
        int ans = 1;
        for (i = 0; i < n; i++)
        {
            if (s1[i] ^ s2[i])
                ans ^= 1;
        }
        cout << ans << endl;
    }
    return 0;
}