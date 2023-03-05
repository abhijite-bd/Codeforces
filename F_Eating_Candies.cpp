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
    int alice, bob, i, j, k, l, n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        alice = 0, bob = 0;
        int ans = 0;
        i = 0;
        j = n - 1;
        int x = 1;
        for (; i != j;)
        {
            if (i == 0 and x)
            {
                alice += a[0];
                bob += a[j];
                x = 0;
            }
            if (alice == bob)
                ans = i + 1 + n - (j);
            if (alice < bob)
            {
                i++;
                // if (i == j)
                //     break;
                alice += a[i];
            }
            else
            {
                j--;
                // if (i == j)
                //     break;
                bob += a[j];
            }
            // cout << alice << ss << bob << endl;
        }
            cout << ans << endl;
    }
    return 0;
}