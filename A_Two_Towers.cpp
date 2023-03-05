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
bool chk(string s)
{
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
            return 0;
    }
    return 1;
}
ll cs = 1;
const int N = 2e5 + 10;
const int M = 1e9 + 7;
int main()
{
    int t, n, m, i, j, k, l;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> n >> m;
        cin >> s1 >> s2;
        if (chk(s1) and chk(s2))
            cout << "YES\n";
        else if (chk(s1) and !chk(s2))
        {
            int flag = 1;
            char pre = s1[n - 1];
            for (i = 1; i < m; i++)
            {
                if (s2[i - 1] == s2[i])
                    break;
            }
            j = m - 1;
            while (j >= i)
            {
                if (pre == s2[j])
                {
                    flag = 0;
                    break;
                }
                pre = s2[j];
                j--;
            }
            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (!chk(s1) and chk(s2))
        {
            int flag = 1;
            char pre = s2[m - 1];
            for (i = 1; i < n; i++)
            {
                if (s1[i - 1] == s1[i])
                    break;
            }
            j = n - 1;
            while (i <= j)
            {
                if (pre == s1[j])
                {
                    flag = 0;
                    break;
                }
                pre = s1[j];
                j--;
            }
            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}