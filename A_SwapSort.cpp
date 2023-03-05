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
    ll n, x, i, j, c, mn;
    cin >> n;
    ll a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << n << endl;
    for (i = 0; i < n; i++)
    {
        mn = a[i];
        c = i;
        for (j = i; j < n; j++)
        {
            if (a[j] < mn)
            {
                mn = a[j];
                c = j;
            }
        }
        swap(a[c], a[i]);
        cout << i << ss << c << endl;
    }

    return 0;
}