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
    string s;
    int n, i, j, ans = 0, k=0, t = 0;
    cin >> s;
    n = s.size();
    for (i = 0; i < n; i++)
    {
        t += s[i] - '0';
        k++;
        if ( k==3 or t % 3 == 0 or (s[i] - '0') % 3 == 0)
        {
            ans++;
            t = 0;
            k=0;
        }
    }
    cout << ans << endl;
    return 0;
}