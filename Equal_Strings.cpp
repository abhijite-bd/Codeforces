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
    int t, n, i, j, k, l;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        map<char, int> m;
        int ans = 0;
        for (i = 0; i < n; i++)
        {
            char x = s1[i];
            char y = s2[i];
            if (x == y)
                continue;
            else
            {
                if (m.find(y) == m.end())
                    ans++;
                m[y]++;
            }
        }
        // for (auto e : m)
        //     if (e.second > 0)
        //         ans++;
        cout << ans << endl;
    }
    return 0;
}