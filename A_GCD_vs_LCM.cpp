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
    ll n, t, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        // ll a;
        // if (n % 4 == 0)
        // {
        //     a = n / 4;
        //     cout << a << ss << a << ss << a << ss << a << endl;
        // }
        // else if (n % 4 == 1)
        // {
        //     a=n/4;
        //     cout << a << ss << a * 2 << ss << a << ss << 1 << endl;
        // }
        // else if (n % 4 == 2)
        // {
        //     a=n/2;
        //     cout << a- 2 << ss << a << ss << 1 << ss << 1 << endl;
        // }
        // else{
        //     a=(n+1)/4;
        //     cout << a << ss << a << ss << a << ss << 1 << endl;
        // }
        cout<<n-3<<ss<<1<<ss<<1<<ss<<1<<endl;
    }
    return 0;
}