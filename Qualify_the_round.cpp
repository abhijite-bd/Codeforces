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
    int a, b, ans, x;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> x >> a >> b;
        ans = a + b * 2;
        if (ans >= x)
            cout << "Qualify";
        else
            cout << "NotQualify";
        cout << endl;
    }
    return 0;
}