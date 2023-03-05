#include <bits/stdc++.h>
using namespace std;
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
#define pi 3.141592653589793
#define case cout << "Case " << cs++ << ": "
ll n, m;
bool chk_coor(ll i, ll j)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
    {
        return false;
    }
    return true;
}
ll cs = 1;
const int N = 2e5 + 10;
const int M = 1e9 + 7;
int main()
{
    ll t, n, i, j, k, l, a, b;
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b;

        vector<ll> both, alice, bob;
        for (i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x % lcm(a, b) == 0)
                both.pb(x);
            else if (x % a == 0)
                bob.pb(x);
            else if (x % b == 0)
                alice.pb(x);
        }
        int c_bob = (both.size() + 1) / 2 + bob.size();
        int c_alice = (both.size()) / 2 + alice.size();
        // cout << both.size() << endl;
        // cout << c_alice << ss << c_bob << endl;
        if (c_bob > c_alice)
            cout << "BOB\n";
        else
            cout << "ALICE\n";
    }
    return 0;
}