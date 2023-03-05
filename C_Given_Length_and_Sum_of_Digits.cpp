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
    int n, s, i, j, k;
    cin >> n >> s;
    if (s == 0)
    {
        if (n == 1)
            cout << "0 0\n";
        else
            cout << -1 << ss << -1 << endl;
    }
    else
    {
        if (s > 9 * n)
            cout << -1 << ss << -1 << endl;
        else
        {
            int tmp = s;
            string smin, smax;
            smin = smax = "";
            s--;
            for (i = 0; i < n - 1; i++)
            {
                smin += to_string(min(9, s));
                s -= (smin[i] - '0');
            }
            smin += to_string(1 + s);
            reverse(all(smin));
            s=tmp;
            for (i = 0; i < n; i++)
            {
                smax+=to_string(min(s,9));
                s-=(smax[i]-'0');
            }
            cout << smin << ss;
            cout << smax << endl;
        }
    }
    return 0;
}