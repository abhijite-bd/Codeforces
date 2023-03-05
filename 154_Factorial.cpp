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
    ll n, i;
    cin >> n;
    if (n == 0)
    {
        cout << 1 << endl;
        return 0;
    }
    for (i = n*4; i <= 1e9; i ++)
    {
        int c = 5, ans = 0;
        while ((i / c) > 0)
        {
            ans += i / c;
            c *= 5;
        }
        if (n == ans)
        {
            cout << i << endl;
            return 0;
        }
        else if (ans > n)
        {
            cout << "No Solution\n";
            return 0;
        }
    }
    cout << "No Solution\n";
    return 0;
}