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
████████████████████████████████   ████   █████████   ████   █████   ██████   █████████████   █████████████████████████████████
████████████████████████████████   ████   █████████   ████   ██████   █████   █████████████   █████████████████████████████████
███████████████████████            ████   █████████   ████   ███████   ████            ████             ███████████████████████
███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
███████████   █████   ████             ████   ████            ████   ████████   ████      ██████   ████              ██████████
███████████   ████   █████   ███████   ████   ████   █████████████   ████████   ████   █   █████   ████   ████████   ██████████
███████████   ███   ██████   ███████   ████   ████   █████████████   ████████   ████   ██   ████   ████   ████████   ██████████
███████████        ███████             ████   ████            ████              ████   ███   ███   ████              ██████████
███████████   ███   ██████   █████   ██████   █████████████   ████   ████████   ████   ████   ██   ████   ████████   ██████████
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
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    ll t, n, i, j, k, l;
    cin >> t;

    while (t--)
    {
        cin >> n;
        int flag = 0;
        for (i = 2; i * i <= n; i++)
        {
            if (n % i == 0 and i != n / i)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << 1 << ss << n / i << ss << i << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}