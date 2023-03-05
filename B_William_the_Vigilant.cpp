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
    int t, n, i, j, k, abc = 0, p;
    char c;
    cin >> n;
    cin >> t;
    string a;
    cin >> a;
    for (i = 0; i < n - 2; i++)
    {
        if (a[i] == 'a' and a[i + 1] == 'b' and a[i + 2] == 'c')
        {
            abc++;
            i += 2;
        }
    }
    while (t--)
    {
        cin >> p >> c;
        p--;
        if (a[p] == c)
            cout << abc << endl;
        else
        {
            for (i = max(0, p - 2); i <= p; i++)
            {
                if (a[i] == 'a' and a[i + 1] == 'b' and a[i + 2] == 'c')
                {
                    abc--;
                    break;
                }
            }
            a[p] = c;
            for (i = max(0, p - 2); i <= p; i++)
            {
                if (a[i] == 'a' and a[i + 1] == 'b' and a[i + 2] == 'c')
                {
                    abc++;
                    break;
                }
            }

            cout << abc << endl;
        }
    }
    return 0;
}