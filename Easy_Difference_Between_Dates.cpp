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
    int m1, m2, d1, d2;
    int a[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> d1 >> m1;
    cin >> d2 >> m2;
    int ans = d2 - d1;
    if (ans < 0)
    {
        ans += a[m1];
        m1++;
    }
    for (int i = m1; i < m2; i++)
    {
        ans += a[i];
    }
    cout << ans << endl;
    return 0;
}