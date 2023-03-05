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
    int t, i, j;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        if (n == 1)
            cout << "Bob " << s[0] - 'a' + 1 << endl;
        else
        {
            int sum = 0;
            for (i = 0; i < n; i++)
            {
                sum += (s[i] - 96);
            }
            if (n % 2 == 1)
                cout << "Alice " << (s[0] <= s[n - 1] ? sum - 2 * s[0] + 2 * 96 : sum - 2 * s[n - 1] + 2 * 96) << endl;
            else
                cout << "Alice " << sum << endl;
        }
    }
    return 0;
}