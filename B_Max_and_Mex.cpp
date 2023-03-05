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
    ll t, n, i, j, k, l, mx, mex;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        set<ll> s;
        for (i = 0; i < n; i++)
        {
            cin >> j;
            s.insert(j);
        }
        if (k == 0)
        {
            cout << s.size() << endl;
            continue;
        }
        auto it = s.end();
        mx = *(--it);
        int flag = 0;
        i = 0;
        for (auto e : s)
        {
            if (e != i)
            {
                mex = i;
                flag = 1;
                break;
            }
            i++;
        }
        if (flag)
        {
            s.insert((mx + mex + 1) / 2);
            cout << s.size()<<endl;
        }

        else
            cout << k + s.size() << endl;
        // cout << mx << ss << mex << endl;
    }
    return 0;
}