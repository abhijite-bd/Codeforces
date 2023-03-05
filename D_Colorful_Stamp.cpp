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
    int t, n, i, j, k, l;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        s = 'W' + s + 'W';
        n = s.size();
        int flag = 1;

        int cr = count(s.begin(), s.end(), 'R');
        int cb = count(all(s), 'B');
        if (cr == n or cb == n)
            flag = 0;
        else
        {
            int start = 1;
            cr=0,cb=0;
            for (i = 0; i < n; i++)
            {
                if (s[i] == 'W')
                {
                    if ((cr > 0 and cb == 0) or (cb > 0 and cr == 0))
                    {
                        flag = 0;
                        break;
                    }
                    cb = 0;
                    cr = 0;
                }
                else
                {
                    if (s[i] == 'B')
                        cb++;
                    else
                        cr++;
                }
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}