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
    int t, n;
    cin >> t;
    while (t--)
    {
        int i, mn, sum = 0;
        mn = INT_FAST16_MAX;
        int a[3];
        for (i = 0; i < 3; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + 3);
        cout << sum - a[0]<<endl;
    }
    return 0;
}