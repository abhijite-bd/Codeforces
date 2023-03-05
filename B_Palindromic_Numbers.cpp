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
    int t, n, i, j;
    string s, ans;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        if (s[0] != '9')
        {
            for (i = 0; i < n; i++)
            {
                cout << ('9' - s[i]);
            }
            cout << endl;
        }
        else
        {
            string s2 = "";
            reverse(all(s));
            int c = 0;
            for (i = 0; i < n; i++)
            {
                j = '1' - s[i] - c;
                if (j < 0)
                {
                    s2 += to_string(j + 10);
                    c = 1;
                }
                else
                {
                    s2 += to_string(j);
                    c = 0;
                }
            }
            reverse(all(s2));
            cout << s2 << endl;
        }
    }
    return 0;
}