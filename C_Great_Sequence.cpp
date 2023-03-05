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
    ll t, n, ans, i, j, k, x, y;
    cin >> t;
    while (t--)
    {

        cin >> n >> k;
        vector<ll> v;
        for (i = 0; i < n; i++)
        {
            cin >> x;
            y = x * k;
            auto it1 = find(v.begin(), v.end(), y);
            ll z = x / k;
            auto it2=v.end();
            if (x == k * z)
                 it2 = find(v.begin(), v.end(), z);
            else
                 it2 = v.end();

            if (it1 == v.end() and it2 == v.end())
            {
                v.pb(x);
            }
            else
            {
                if (it1 != v.end())
                    v.erase(it1);
                else
                    v.erase(it2);
            }
        }
        cout << v.size() << endl;
    }
    return 0;
}
