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
    string s;
    while (getline(cin, s))
    {
        if (s.size() == 0)
        {
            cout << "error\n";
            continue;
        }
        int i, n = s.size(), flag = 1;
        ll ans;
        string p;
        for (i = 0; i < n; i++)
        {
            if (isdigit(s[i]))
                p += s[i];
            else if (s[i] == ' ' or s[i] == ',')
                continue;
            else if (s[i] == 'o' or s[i] == 'O')
                p += '0';
            else if (s[i] == 'l')
                p += '1';
            else
            {
                flag = 0;
                break;
            }
        }
        if (p.size() == 0 or p.size() > 10 or flag == 0)
            cout << "error\n";
        else
        {
            ans = stoll(p);
            if (ans <= 2147483647)
                cout << ans << endl;
            else
                cout << "error\n";
        }
    }
    return 0;
}