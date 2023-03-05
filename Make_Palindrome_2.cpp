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
    int t, n, i, j, k, l, one, zero;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        one = count(all(s), '1');
        zero = count(all(s), '0');
        if (n % 2 == 0)
        {
            if (one >= zero)
                cout << string(n / 2, '1') << endl;
            else
                cout << string(n / 2, '0') << endl;
        }
        else
        {
            if (one >= zero)
                cout << string(n / 2 + 1, '1') << endl;
            else
                cout << string(n / 2 + 1, '0') << endl;
        }
    }
    return 0;
}