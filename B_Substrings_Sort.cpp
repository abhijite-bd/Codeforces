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
bool cmp(string a, string b)
{
    return a.size() < b.size();
}
int main()
{
    int i, n, t;
    vector<string> v;
    string s;
    cin >> t;
    n = t;
    while (t--)
    {
        cin >> s;
        v.pb(s);
    }
    sort(v.begin(), v.end(), cmp);

    for (i = 0; i < n - 1; i++)
    {
        size_t found = v[i + 1].find(v[i]);
        // cout<<found<<endl;
        if (found == string::npos)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES\n";
    for (auto e : v)
        cout << e << endl;

    return 0;
}