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
    int t, n, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n;
        bool z = 0, f = false;
        int zc = 0;
        map<int, int> m;
        for (i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                z = true;
                zc++;
            }
            if (m.find(x) != m.end())
                f = true;
            m[x]++;
        }
        if (z)
        {
            cout << n - zc;
        }
        else if (f)
            cout << n;
        else
            cout << n + 1;
        cout << endl;
    }
    return 0;
}