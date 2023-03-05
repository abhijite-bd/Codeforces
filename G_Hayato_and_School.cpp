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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i;
        cin >> n;
        vector<ll> odd, even;
        for (i = 0; i < n; i++)
        {
            ll r;
            cin >> r;
            if (r % 2)
                odd.push_back(i + 1);
            else
                even.push_back(i + 1);
        }
        if (odd.size() >= 3)
        {
            cout << "YES\n";
            for (i = 0; i < 3; i++)
                cout << odd[i] << " ";
            cout << endl;
        }
        else if (odd.size() >= 1 && even.size() >= 2)
        {
            cout << "YES\n";
            for (i = 0; i < 1; i++)
                cout << odd[i] << " ";
            for (i = 0; i < 2; i++)
                cout << even[i] << " ";
            cout << endl;
        }

        else
            cout << "NO\n";
    }

    return 0;
}