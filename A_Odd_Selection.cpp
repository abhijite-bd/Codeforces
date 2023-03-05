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
    int t, n, k, i, j, l;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int odd=0, ev=0;
        for (i = 0; i < n; i++)
        {
            cin >> l;
            if (l % 2)
                odd++;
            else
                ev++;
        }
        if (odd == 0)
            cout << "NO";
        else if (k == n and odd % 2 == 0)
            cout << "NO";
        else if (k % 2 == 0 and odd == n)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }
    return 0;
}