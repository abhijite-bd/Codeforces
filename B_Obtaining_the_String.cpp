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
using namespace std;

int main()
{
    int n, i, k, j, p;
    string s, t;
    vector<int> v;
    cin >> n >> s >> t;
    string s1 = s;
    string s2 = t;
    sort(all(s1));
    sort(all(s2));
    if (s1 != s2)
    {
        cout << -1 << endl;
        return 0;
    }
    int c = 0;
    for (i = 0; i < n - 1; i++)
    {
        if (s[i] != t[i])
        {
            for (j = i; j < n; j++)
            {

                if (s[j] == t[i])
                {
                    p = j;
                }
            }
            for (j = p - 1; j >= i; j--)
            {
                v.pb(j + 1);
                swap(s[j], s[j + 1]);
                c++;
            }
        }
    }
    cout << c << endl;
    for (auto e : v)
        cout << e << ss;
    return 0;
}