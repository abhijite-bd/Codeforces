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
    int t, n, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> v;
        int ans = 0;
        for (i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ans += (x - 1);
        }
        if (ans % 2 == 0)
            cout << "maomao90\n";
        else
            cout << "errorgorn\n";
    }
    return 0;
}