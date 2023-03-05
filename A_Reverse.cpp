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
    int t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n + 1];
        vector<int> v;
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int flag = 0, val = 1, st = n + 1, en = 0;
        for (i = 1; i <= n; i++)
        {
            if (a[i] == val and !flag)
            {
                v.pb(i);
                val++;
            }
            else
            {
                if (!flag)
                    st = i;
                if (val == a[i])
                {
                    en = i;
                    break;
                }
                flag = 1;
            }
        }
        if (flag)
        {
            for (i = en; i >= st; i--)
            {
                v.pb(a[i]);
            }
            for (i = en + 1; i <= n; i++)
            {
                v.pb(a[i]);
            }
        }

        for (auto e : v)
            cout << e << ss;
        cout << endl;
        // cout<<st<<ss<<en<<endl;
    }
    return 0;
}