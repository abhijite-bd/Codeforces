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
    int t, n, i, j, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int x;
        vector<int> odd, even;
        for (i = 0; i < n; i++)
        {
            cin >> x;
            if (i % 2 == 0)
                even.pb(x);
            else
                odd.pb(x);
        }
        int flag = 0;
        int ans = 0;

        for (i = 0; i < even.size() - 1; i++)
        {
            ans = even[i + 1] ^ even[i];
            // cout<<ans<<endl;
            if (ans & 1)
            {
                flag = 1;
                break;
            }
        }
        for (i = 0; i < odd.size() - 1; i++)
        {
            ans = odd[i + 1] ^ odd[i];
            if (ans & 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}