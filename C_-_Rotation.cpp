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
    int n, t, i, j, k, l;
    cin >> n >> t;
    string s;
    cin >> s;
    int x = 0;
    while (t--)
    {
        cin >> k >> l;
        if (k == 1)
        {
            x += l;
        }
        else
        {
            if (l - 1 - x < 0)
            {
                int p = n-x+l;
                x%=n;
                // cout<<" "<<p<<endl;
                cout << s[p-1] << endl;
            }
            else
                cout << s[l - 1 - x] << endl;
        }
        x %= n;
        // cout << x << endl;
    }
    return 0;
}