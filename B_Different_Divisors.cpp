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
int isprime(ll n)
{

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 1;
    }
    return 0;
}
int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll first = 1 + n;
        ll ans;
        while (isprime(first))
            first++;
        ll second = first + n;
        while (isprime(second))
            second++;
        // cout << first << ss << second << endl;
        ans = first * second;
        cout << ans << endl;
    }
    return 0;
}