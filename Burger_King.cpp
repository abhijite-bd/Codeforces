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
    fast();
    int k, n, i, j, l, x, t, y, b, ans;
    cin >> t;
    for (k = 1; k <= t; k++)
    {
        cin >> n >> l >> b;
        vector<int> v(n);
        map<int, int> mp;
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        ans = 0;
        sort(all(v));
        if (l == 1)
        {
            ans = mp[b];
        }
        else if (l == 2)
        {
            for (i = 0; i < n - 1; i++)
            {
                y = b - v[i];
                ans += count(v.begin() + i + 1, v.end(), y);
            }
        }
        else
        {
            i = 0;
            while (i < n - 2)
            {
                j = i + 1;
                x = v[i] + v[j];
                while (j < n - 1)
                {
                    y = b - x;
                    ans += count(v.begin() + j + 1, v.end(), y);
                    x -= v[j];
                    j++;
                    x += v[j];
                }
                i++;
            }
        }
        cout << "Case " << k << ": " << ans << endl;
    }
    return 0;
}