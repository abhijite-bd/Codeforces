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
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    string s;
    int t, n, i, j, k, l;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        int ans = n;
        i = n / 2;
        int flag = 0, cp = 0;
        while (i > 0)
        {
            string s1 = s.substr(0, i);
            string s2 = s.substr(i, i);
            // cout << s1 << ss << s2 << endl;
            if (s1 == s2)
            {
                cp++;
                ans = i + 1;
                j = i / 2;
                while (j >= 2)
                {
                    string s1 = s.substr(0, j);
                    string s2 = s.substr(j, j);
                    if(s1==s2)
                    {
                        cp++;
                    }
                }
                flag = 1;
                break;
            }
            i--;
        }
        if (flag)
        {
            ans += (n - 2 * i);
        }
        cout << ans << endl;
    }
    return 0;
}