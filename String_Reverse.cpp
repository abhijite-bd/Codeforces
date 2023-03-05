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
using namespace std;
int main()
{
    int t;
    string s, rev;
    cin >> t;
    while (t--)
    {
        cin >> s;
        rev = s;
        reverse(rev.begin(), rev.end());
        int n = rev.size(), ans = 0, k = 0, j = 0;
        while (j < n)
        {
            if (s[j] != rev[k])
            {
                ans++;
            }
            else
            {
                k++;
            }
            j++;
        }
        cout << ans << endl;
    }
    return 0;
}