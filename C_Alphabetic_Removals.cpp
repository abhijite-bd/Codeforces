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
    int n, k, i;
    string s;
    cin >> n >> k;
    cin >> s;
    vector<pair<char, int>> v;
    for (i = 0; i < n; i++)
    {
        v.push_back({s[i], i});
    }
    sort(v.begin(), v.end());
    // for (auto e : v)
    //     cout << e.first << ss << e.second << endl;
    // cout << endl;

    sort(v.begin() + k, v.end(), [&](const pair<char, int> &a, const pair<char, int> &b)
         { return a.second < b.second; });
    // for (auto e : v)
    //     cout << e.first << ss << e.second << endl;
    // cout << endl;
    for (i = k; i < n; i++)
    {
        cout<<v[i].first;
    }
    return 0;
}