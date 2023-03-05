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
    int t, n, m, i, j, k, l;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        string s1, s2, p;
        cin>>s1>>s2;
        int f = 1;
        int one1, one2, zero1, zero2;
        one1 = count(all(s1), '1');
        one2 = count(all(s2), '1');
        zero1 = n - one1;
        zero2 = m - one2;
        if (one2 > one1 or zero2 > zero1)
            f = 0;
        reverse(all(s1));
        reverse(all(s2));
        for (i = 0; i < m - 1; i++)
        {
            if (s2[i] != s1[i])
            {

                f = 0;
                break;
            }
        }
        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}