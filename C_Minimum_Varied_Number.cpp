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
    int t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s = "";
        int p = 9;
        while (n != 0)
        {
            if (n <= 9)
            {
                if (p > n)
                {
                    s += to_string(n);
                    n = 0;
                }
                else
                {
                    s += to_string(p);
                    n -= p;
                }
            }
            else
            {
                s += to_string(p);
                n -= p;
            }
            p--;
        }
        reverse(all(s));
        cout << s << endl;
    }
    return 0;
}