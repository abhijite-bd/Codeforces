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
    int a, b, c, i;
    cin >> a >> b >> c;
    vector<int> v1(a), v2(b), v3(c);
    for (i = 0; i < a; i++)
    {
        cin >> v1[i];
    }
    for (i = 0; i < b; i++)
    {
        cin >> v2[i];
    }
    for (i = 0; i < c; i++)
    {
        cin >> v3[i];
    }
    reverse(all(v1));
    reverse(all(v2));
    reverse(all(v3));
    map<int, int> m;
    m[v1[0]]++;
    m[v2[0]]++;
    m[v3[0]]++;
    for (i = 1; i < a; i++)
    {
        v1[i] += v1[i - 1];
        m[v1[i]]++;
    }
    for (i = 1; i < b; i++)
    {
        v2[i] += v2[i - 1];
        m[v2[i]]++;
    }
    for (i = 1; i < c; i++)
    {
        v3[i] += v3[i - 1];
        m[v3[i]]++;
    }
    int ans = 0;
    for (auto e : m)
    {
        // cout << e.first << ss << e.second << endl;
        if (e.second == 3)
            ans = e.first;
    }
    cout << ans << endl;
    return 0;
}