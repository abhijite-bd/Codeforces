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
    ll n, i, j, s1, s2;
    cin >> n;
    ll a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    s1 = s2 = 0;
    i = 0;
    j = n - 1;
    while (i <= j)
    {
        if (s1 <= s2)
        {
            s1 += a[i];
            i++;
        }
        else
        {
            s2 += a[j];
            j--;
        }
        if (s1 == s2)
        {
            ans = s1;
        }
        // cout<<i<<ss<<j<<endl;
        // cout<<s1<<ss<<s2<<endl;
    }
    cout << ans << endl;
    return 0;
}