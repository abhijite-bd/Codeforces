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
    int t, i, j, c;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        c = 0;
        char p = s[0];
        int flag = 1;
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] == p)
                c++;
            else
            {
                if (c < 2)
                {
                    flag = 0;
                    break;
                }
                else
                    c = 1;
            }
            p = s[i];
        }
        if (c < 2)
            flag = 0;

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}