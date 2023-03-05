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
int solution(string s1, string s2)
{
    if (s1.size() < s2.size())
        swap(s1, s2);
    int i, j = 0;
    for (i = 0; i < s1.size() and j != s2.size(); i++)
    {
        if (s1[i] == s2[j])
            j++;
    }
    return j;
}
bool cmp(string a, string b)
{
    return a.size() < b.size();
}
ll cs = 1;
const int N = 2e5 + 10;
const int M = 1e9 + 7;
int main()
{
    int t, n = 3, i, j, k, l;
    cin >> t;
    while (t--)
    {
          case;
        vector<string> s(3);
        for (i = 0; i < 3; i++)
        {
            cin >> s[i];
        }
        sort(all(s), cmp);
        int ans = 0;
        i=j=k=0;
        for (i = 0; i < s[0].size(); i++)
        {
            int d1=0,d2=0;
           for (j = j; j < s[1].size(); j++)
           {
               if(s[0][i]==s[1][j])
               {
                d1=1;
                break;
               }
           }
           for (k = k; k < s[2].size(); k++)
           {
               if(s[0][i]==s[2][k])
               {
                d2=1;
                break;
               }
           }
           if(d1 and d2)
           ans++;
        }
        cout << ans << endl;
    }
    return 0;
}