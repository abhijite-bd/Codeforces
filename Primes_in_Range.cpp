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
int prime[1000001];
using namespace std;
int main()
{
    int t, n = 1000001, m, i, j;
    prime[0] = 0;
    prime[1] = 0;
    for (i = 2; i < n; i++)
    {
        prime[i] = 1;
    }
    for (i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (j = i * i; j < n; j += i)
            {
                prime[j] = 0;
            }
        }
    }
    for (i = 2; i < n; i++)
    {
        prime[i] += prime[i - 1];
    }
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cout << prime[m] - prime[n - 1] << endl;
    }
    return 0;
}