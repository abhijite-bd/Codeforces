/*
███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
███████████████████████████████████████            ████             ████   ███████   ██████████████████████████████████████████
████████████████████████████████████████████████   ████   ███████   ████   ███████   ██████████████████████████████████████████
████████████████████████████████████████████████   ████   ███████   ████   ███████   ██████████████████████████████████████████
████████████████████████████████████████████████   ████   ███████   ████             ██████████████████████████████████████████
███████████████████████████████████████  ███████   ████   ███████   █████████   ███████████████████████████████████████████████
███████████████████████████████████████  ███████   ████   ███████   █████████   ███████████████████████████████████████████████
███████████████████████████████████████            ████             █████████   ███████████████████████████████████████████████
███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
███████████████████████            ████   █████████   ████             ████            ████             ███████████████████████
███████████████████████   █████████████   █████████   ████   ███████   ████   █████████████   █████████████████████████████████
███████████████████████   █████████████   █████████   ████   ███████   ████   █████████████   █████████████████████████████████
███████████████████████            ████               ████             ████           █████            ████████████████████████
████████████████████████████████   ████   █████████   ████   ████   ███████   █████████████   █████████████████████████████████
████████████████████████████████   ████   █████████   ████   ██████   █████   █████████████   █████████████████████████████████
███████████████████████            ████   █████████   ████   ███████   ████            ████             ███████████████████████
███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
███████████   █████   ████             ████   ████            ████   ████████   ████      ██████   ████              ██████████
███████████   ████   █████   ███████   ████   ████   █████████████   ████████   ████   █   █████   ████   ████████   ██████████
███████████   ███   ██████   ███████   ████   ████   █████████████   ████████   ████   ██   ████   ████   ████████   ██████████
███████████        ███████             ████   ████            ████              ████   ███   ███   ████              ██████████
███████████   ███   ██████   ████   ███████   █████████████   ████   ████████   ████   ████   ██   ████   ████████   ██████████
███████████   ████   █████   ██████   █████   █████████████   ████   ████████   ████   █████   █   ████   ████████   ██████████
███████████   █████   ████   ███████   ████   ████            ████   ████████   ████   ██████      ████   ████████   ██████████
███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
█████              ████             ████   █████████   ████   ████             ████   ████               ████             █████
█████   ████████   ████   ████████  ████   █████████   ████   ██████████████   ████   ██████████   ██████████   ███████████████
█████   ████████   ████   ████████  ████   █████████   ████   ██████████████   ████   ██████████   ██████████   ███████████████
█████              ████             ████               ████   ██████████████   ████   ██████████   ██████████            ██████
█████   ████████   ████   ████████  ████   █████████   ████   ████   ███████   ████   ██████████   ██████████   ███████████████
█████   ████████   ████   ████████  ████   █████████   ████   ████   ███████   ████   ██████████   ██████████   ███████████████
█████   ████████   ████             ████   █████████   ████   ████             ████   ██████████   ██████████             █████
███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
*/
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
    fast();
    int n, i, j, k, l, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string str[n], s, st;
        map<string, int> m;
        for (i = 0; i < n; i++)
        {
            cin >> str[i];
            m[str[i]]=1;
        }
        for (i = 0; i < n; i++)
        {
            string x = str[i];
            l = x.size();
            int ok = 0;
            for (j = 0; j < l - 1; j++)
            {
                if (m[x.substr(0, j+1)] == 1 and m[x.substr(j+1)]==1)
                {
                    ok = 1;
                    break;
                }
            }
            if (ok)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
        m.clear();
    }

    return 0;
}