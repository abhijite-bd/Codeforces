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
    int n, i, j, k, d;
    string s;
    cin >> n;
    cin >> s;
    vector<int> v;
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
            v.pb(i);
    }
    // for (auto e : v)
    //     cout << e << endl;
    for (i = 0; i < v.size(); i++)
    {
        string sub1 = s.substr(0, v[i]);
        reverse(sub1.begin(), sub1.end());
        string sub2 = s.substr(v[i], n - v[i]);
        s = sub1 + sub2;
        // cout << sub1<<ss<<sub2 << endl;
    }
    cout << s << endl;
    return 0;
}