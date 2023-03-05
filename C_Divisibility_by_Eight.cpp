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
    int n, i, j, k, l;
    string s;
    cin >> s;
    n = s.size();
    string st1, st2, st3, ans;
    int flag = 0;
    for (i = 0; i < n; i++)
    {
        st1 = s[i];
        int d = stoi(st1);
        if (d % 8 == 0)
        {
            ans = st1;
            flag = 1;
            break;
        }
        for (j = i + 1; j < n; j++)
        {
            st2 = st1 + s[j];
            int d = stoi(st2);
            if (d % 8 == 0)
            {
                ans = st2;
                flag = 1;
                break;
            }
            for (k = j + 1; k < n; k++)
            {
                if ((s[k] - '0') % 2)
                    continue;
                st3 = st2 + s[k];
                int d = stoi(st3);
                if (d % 8 == 0)
                {
                    ans = st3;
                    flag = 1;
                    break;
                }
            }
        }
    }
    if (flag)
    {
        cout << "YES\n";
        cout << ans << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}