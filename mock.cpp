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
    fast();
    ll t, n, m, i, j, k, ans;
    cin >> t;
    for (k = 1; k <= t; k++)
    {
        string s1, s2, s3 = "";
        cin >> s1 >> s2;
        n = s1.size();
        m = s2.size();
        ans = 0;
        map<char, int> mp;
        for (i = 0; i < m; i++)
        {
            if (m[s2[i]] == 0)
                s3.push_back(s2[i]);
            m[s2[i]]++;
        }
        // m = s.size();
        for (i = 0; i < s3.size(); i++)
        {
            ans += count(s1.begin(), s1.end() - m + i + 1, s2[i]);
        }
        // cout << ans << endl;
        // for (i = 0; i < m; i++)
        // {
        //     if (s2[i] == s1[n - m + i])
        //         ans++;
        // }

        printf("Case %lld: %lld\n", k, ans);

        // cout << ans << endl;
    }
    return 0;
}