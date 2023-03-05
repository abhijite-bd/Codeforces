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
    int n, k, i;
    cin >> n >> k;
    string s, t;
    int p = n;
    cin >> s;
    int f = 0;
    for (i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n - 1-i])
        {
            p--;
            f = 1;
        }
        else
            break;
    }
    for (i = 0; i < p; i++)
    {
        t += s[i];
    }
    if (f)
        reverse(all(t));
    cout << s;
    for (i = 0; i < k - 1; i++)
    {
        cout << t;
    }
    cout << endl;
    return 0;
}