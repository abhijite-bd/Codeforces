/*
███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
███████████████████████████████████████            ████             ████   ███████   ██████████████████████████████████████████
████████████████████████████████████████████████   ████   ███████   ████   ███████   ██████████████████████████████████████████
████████████████████████████████████████████████   ████   ███████   ████   ███████   ██████████████████████████████████████████
████████████████████████████████████████████████   ████   ███████   ████             ██████████████████████████████████████████
███████████████████████████████████████  ███████   ████   ███████   █████████   ███████████████████████████████████████████████
███████████████████████████████████████  ███████   ████   ███████   █████████   ███████████████████████████████████████████████
███████████████████████████████████████            ████             █████████   ███████████████████████████████████████████████
███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
███████████████████████            ████   █████████   ████             ████            ████             ███████████████████████
███████████████████████   █████████████   █████████   ████   ███████   ████   █████████████   █████████████████████████████████
███████████████████████   █████████████   █████████   ████   ███████   ████   █████████████   █████████████████████████████████
███████████████████████            ████               ████             ████           █████            ████████████████████████
████████████████████████████████   ████   █████████   ████   ████   ███████   █████████████   █████████████████████████████████
████████████████████████████████   ████   █████████   ████   ██████   █████   █████████████   █████████████████████████████████
███████████████████████            ████   █████████   ████   ███████   ████            ████             ███████████████████████
███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
███████████   █████   ████             ████   ████            ████   ████████   ████      ██████   ████              ██████████
███████████   ████   █████   ███████   ████   ████   █████████████   ████████   ████   █   █████   ████   ████████   ██████████
███████████   ███   ██████   ███████   ████   ████   █████████████   ████████   ████   ██   ████   ████   ████████   ██████████
███████████        ███████             ████   ████            ████              ████   ███   ███   ████              ██████████
███████████   ███   ██████   ████   ███████   █████████████   ████   ████████   ████   ████   ██   ████   ████████   ██████████
███████████   ████   █████   ██████   █████   █████████████   ████   ████████   ████   █████   █   ████   ████████   ██████████
███████████   █████   ████   ███████   ████   ████            ████   ████████   ████   ██████      ████   ████████   ██████████
███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
█████              ████             ████   █████████   ████   ████             ████   ████               ████             █████
█████   ████████   ████   ████████  ████   █████████   ████   ██████████████   ████   ██████████   ██████████   ███████████████
█████   ████████   ████   ████████  ████   █████████   ████   ██████████████   ████   ██████████   ██████████   ███████████████
█████              ████             ████               ████   ██████████████   ████   ██████████   ██████████            ██████
█████   ████████   ████   ████████  ████   █████████   ████   ████   ███████   ████   ██████████   ██████████   ███████████████
█████   ████████   ████   ████████  ████   █████████   ████   ████   ███████   ████   ██████████   ██████████   ███████████████
█████   ████████   ████             ████   █████████   ████   ████             ████   ██████████   ██████████             █████
███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
*/
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
    ll n;
    cin>>n;
    map<ll, ll> m;
    ll ans = 0;
    if(n%10==0)
    {
        n++;
        ans++;
    }
    while (m[n] == 0)
    {
        while (n % 10 == 0)
        {
            n /= 10;
        }
        if (m[n] == 0)
        {
            m[n] = 1;
            n++;
            ans++;
        }
        // cout<<n<<ss;
    }
    cout << ans << endl;
    return 0;
}