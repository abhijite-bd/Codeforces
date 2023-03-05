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
    int t, n, i, x, j;
    cin >> t;
    int holiday[] = {6, 13, 20, 27, 7, 14, 21, 28};
    while (t--)
    {
        cin >> n;
        int ans = 8 + n;
        for (i = 0; i < n; i++)
        {
            cin >> x;
            for (j = 0; j < 8; j++)
            {
                if (x == holiday[j])
                    ans--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}