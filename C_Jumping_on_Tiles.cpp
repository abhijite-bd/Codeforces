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
    int t, n, i, j, k, ans;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        n = s.size();
        int a[n];
        char mc = 'z', mxc = 'a';
        for (i = 0; i < n; i++)
        {
            a[i] = s[i] - 96;
           
        }
        if(s[0]<=s[n-1])
        mc=s[0],mxc=s[n-1];
        else
        mxc=s[0],mc=s[n-1];
        // cout << mc << ss << mxc << endl;
        vector<pair<int, int>> v;
        int m = 0;
        int mx = max(a[0], a[n - 1]);
        for (i = 0; i < n; i++)
        {
            if (s[i]>=mc and s[i]<=mxc)
            {
                m++;
                if (i == 0 or i == n - 1)
                    continue;
                v.pb({abs(a[0] - a[i]), i + 1});
            }
        }
        cout << abs(a[0] - a[n - 1]) << ss;
        cout << m << endl;
        sort(all(v));
        cout << 1 << ss;
        for (auto e : v)
            cout << e.second << ss;
        cout << n << endl;
    }
    return 0;
}