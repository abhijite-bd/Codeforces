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
    ll t, n, i, j;
    cin >> t;
    ll prime[1e5];
    memset(prime, 1, sizeof(prime));
    for (i = 2; i <= sqrt(n); i++)
    {
        if ()
    }
    while (t--)
    {
        cin >> n;
        map<ll, ll> m;
        while (n % 2 == 0)
        {
            m[2]++;
            n /= 2;
        }
        for (i = 3; i <= sqrt(n); i++)
        {
            while (n % i == 0 and n != 0)
            {
                m[i]++;
                n /= i;
            }
        }
        if (n > 1)
            m[n]++;
        ll ev = 0, odd = 0;
        for (auto e : m)
        {
            if (e.second % 2)
                odd += e.second;
            else
                ev += e.second;
        }
        if (odd > ev)
            cout << "Ordinary Number\n";
        else
            cout << "Psycho Number" << endl;
        m.clear();
    }
    return 0;
}