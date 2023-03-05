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
const int N = 2e5 + 10;
const int M = 1e9 + 7;
int main()
{
    int t, n, one, zero, i;
    cin >> t;
    while (t--)
    {
        string s;
        one = zero = 0;
        cin >> n;
        cin >> s;
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                one++;
            else
                zero++;
        }
        cout << min(one, zero + 1) << endl;
    }
    return 0;
}