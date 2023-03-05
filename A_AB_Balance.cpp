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
    int t, n, i, j, ab, ba;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        n = s.size();
        // ab = 0, ba = 0;
        // vector<int> vab, vba;
        // for (i = 0; i < n - 1; i++)
        // {
        //     if (s[i] == 'a' and s[i + 1] == 'b')
        //     {
        //         vab.pb(i);
        //         ab++;
        //         i++;
        //     }
        // }
        // for (i = 0; i < n - 1; i++)
        // {
        //     if (s[i] == 'b' and s[i + 1] == 'a')
        //     {
        //         vba.pb(i);
        //         ba++;
        //         i++;
        //     }
        // }
        // // cout << ab << ss << ba << endl;
        // if (ab > ba)
        // {
        //     for (i = 0; i < ab - ba; i++)
        //     {
        //         s[vab[i]] = 'b';
        //     }
        // }
        // else
        // {
        //     for (i = 0; i < ba - ab; i++)
        //     {
        //         s[vba[i]] = 'a';
        //     }
        // }
        s[n-1]=s[0];
        cout << s << endl;
    }
    return 0;
}