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
    int n, i, j, k;
    cin >> n;
    int a[n], pre[n + 1] = {0};
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        pre[i + 1] = pre[i] + a[i];
    }
    int s, t;
    for (auto e : pre)
        cout << e << ss;
    cin >> s >> t;
    // cout << pre[t] - pre[s] << endl;
    return 0;
}