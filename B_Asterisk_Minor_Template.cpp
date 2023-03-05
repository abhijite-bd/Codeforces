#include <bits/stdc++.h>
using namespace std;
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
#define pi 3.141592653589793
#define case cout << "Case " << cs++ << ": "
ll n, m;
bool chk_coor(ll i, ll j)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
    {
        return false;
    }
    return true;
}
ll cs = 1;
const int N = 2e5 + 10;
const int M = 1e9 + 7;
int main()
{
    int t, n, i, j, k, l, m;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        n = s1.size();
        m = s2.size();
        if (s1[0] == s2[0])
        {
            cout << "YES" << endl;
            cout << s1[0] << '*' << endl;
            continue;
        }
        else if (s1[n - 1] == s2[m - 1])
        {
            cout << "YES" << endl;
            cout << '*' << s1[n - 1] << endl;
            continue;
        }
        int flag = 0;
        string st;
        for (i = 0; i < n - 1; i++)
        {
            st = s1.substr(i, 2);
            int d = s2.find(st);
            if (d >= 0)
            {
                flag = 1;
                k = d;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
            cout << '*' << st << "*" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}