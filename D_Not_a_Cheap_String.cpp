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
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
int main()
{
    ll t, n, i, j, k;
    string st, s;
    cin >> t;
    while (t--)
    {
        int p = 0;
        cin >> st;
        s = st;
        cin >> k;
        sort(all(s));
        string ans = "";
        n = s.size();
        map<char, int> mp;
        for (i = 0; i < n; i++)
        {
            int d = s[i] - 'a' + 1;
            if (p + d > k)
                break;
            mp[s[i]]++;
            p += d;
        }
        for (i = 0; i < n; i++)
        {
            if (mp[st[i]] > 0)
            {
                cout << st[i];
                mp[st[i]]--;
            }
        }
        cout << endl;
    }
    return 0;
}