// #include <bits/stdc++.h>
// #define ll long long int
// #define gcd(a, b) __gcd(a, b)
// #define lcm(a, b) (a * b) / gcd(a, b)
// #define ss ' '
// #define fast()                    \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL)
// #define max3(a, b, c) max(max(a, b), c)
// #define min3(a, b, c) min(min(a, b), c)
// #define pb push_back
// #define all(v) v.begin(), v.end()
// #define allr(v) v.rbegin(), v.rend()
// #define endl '\n'
// #define pi 3.14159265359
// using namespace std;
// int main()
// {
//     int t, n, k, i, j, l, mx, mn;
//     cin >> t;
//     for (l = 1; l <= t; l++)
//     {
//         cin >> n >> k;
//         string s;
//         cin >> s;
//         mx = mn = 0;
//         for (i = 0; i < n; i++)
//         {
//             if (s[i] == 'e')
//             {
//                 mx += 4;
//                 mn += 4;
//             }
//             else if (s[i] == 'f')
//             {
//                 mx += 1;
//                 mn += 1;
//             }
//             else
//             {
//                 mx += 4;
//                 mn += 1;
//             }
//         }
//         if (k >= mx)
//             printf("Case %d: Iching Biching Chiching Cha, Projapoti Ure Ja", l);
//         else if (k < mn)
//             printf("Case %d: Iching Biching Chiching Cha, Projapoti Ghore Ja", l);
//         else
//             printf("Case %d: Builders, please be kind!", l);
//         cout << endl;
//     }
//     return 0;
// }
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
#define MOD 1000000007
using namespace std;
int main()
{
    fast();
    int t, n, m, i, j, k, x, y, cng;
    cin >> y;
    for (k = 1; k <= y; k++)
    {
        string s, st, c;
        cin >> s;
        cin >> t >> m;
        map<string, string> mp;
        while (t--)
        {
            cin >> st >> c;
            mp[st] = c;
        }
        cng = 0;
        while (m--)
        {
            string p = s;
            n = s.size();
            int l = cng + 1, fl = 1;
            for (i = cng; i < n - 1; i++)
            {
                st = s.substr(i, 2);
                if (mp.find(st) != mp.end())
                {
                    p.insert(l, mp[st]);
                    l++;
                    if (fl)
                        cng = i;
                    fl = 0;
                    // if(i>cng)
                    // cng=i;
                }
                l++;
            }
            s = p;
            // cout << s << endl;
            // cout << cng << endl;
        }
        n = s.size();
        ll ans = 1LL;
        map<int, int> v;
        for (i = 0; i < n; i++)
        {
            v[s[i] - 'A']++;
        }
        for (auto e : v)
            ans = (ans * e.second) % MOD;
        printf("Case %d: %lld\n", k, ans);
    }
    return 0;
}