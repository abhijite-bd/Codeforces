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
    int t, i, j, k, l;
    string s;
    // char s1 = 'a';
    // char s2 = 'b';
    // vector<string> v;
    // for (i = 0;; i++)
    // {
    //     s = s1 + s2;
    //     if (s == "zz")
    //         break;
    //     if (s1 == s2)
    //         continue;
    //     else
    //         v.pb(s);
    //     if (s2 == 'z')
    //     {
    //         s1++;
    //         s2 = 'a';
    //     }
    //     s2++;
    // }
    // for(auto e:v)
    // cout<<e<<endl;
    cin >> t;
    while (t--)
    {
        cin >> s;
        k = 0;
        k += (s[0] - 'a') * 25;
        if (s[0] > s[1])
            k += (s[1] - 'a') + 1;
        else
            k += (s[1] - 'a');
        cout << k << endl;
    }
    return 0;
}