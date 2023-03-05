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
    int t, n, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s, ans = "";
        cin >> s;
        for (i = 0; i < n ; i+=2)
        {
            if (s[i] == '0' and s[i + 1] == '0')
                ans += 'A';
            else if (s[i] == '0' and s[i + 1] == '1')
                ans += 'T';
            else if (s[i] == '1' and s[i + 1] == '0')
                ans += 'C';
            else if (s[i] == '1' and s[i + 1] == '1')
                ans += 'G';
        }
        cout << ans << endl;
    }
    return 0;
}