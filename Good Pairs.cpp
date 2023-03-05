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
//     fast();
//     ll t, n, i, j;
//     cin >> t;
//     while (t--)
//     {
//         cin >> n;
//         ll a[n], x, ans = 0;
//         ;
//         // vector<pair<ll, ll>> v;
//         map<pair<ll, ll>, int> m;

//         for (i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (i = 0; i < n; i++)
//         {
//             cin >> x;
//             if (a[i] != x)
//             {

//                 if (m.find({x, a[i]}) != m.end())
//                 {
//                     m[{x, a[i]}]++;
//                     // m[{a[i], x}]++;
//                     // ans++;
//                     // cout<<x<<ss<<a[i]<<endl;
//                     // cout << m[{x, a[i]}] << endl;
//                     ans += m[{x, a[i]}] - 1;
//                     // cout<<ans<<endl;
//                 }
//                 else
//                 {
//                     // cout<<a[i]<<ss<<x<<endl;
//                     m[{a[i], x}]++;
//                     // cout << m[{a[i], x}] << endl;
//                 }
//             }
//             else
//             {
//                 if (m.find({a[i], x}) == m.end())
//                     m[{a[i], x}]++;
//                 else
//                 {
//                     m[{a[i], x}]++;
//                     ans += m[{a[i], x}] - 1;
//                 }
//             }

//             // if (m[{a[i], x}] > 1)
//             //     ans += m[{a[i], x}] - 1;
//         }
//         cout << ans << endl;
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
using namespace std;
int main()
{
    fast();
    ll t, n, i, j, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a[n], b[n], ans = 0;
        // vector<pair<ll, ll>> v1, v2;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        map<pair<ll, ll>, int> m;
        // sort(all(v1));
        for (i = 0; i < n; i++)
        {
            ans += m[{a[i], b[i]}];
            m[{b[i], a[i]}]++;
        }
        cout << ans << endl;
    }
    return 0;
}