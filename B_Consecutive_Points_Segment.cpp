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
    int t, n, i, j, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(a[n-1]-a[0]<=n+1)
        
        // int flag = 1, p = 0;

        // for (i = 1; i < n; i++)
        // {
        //     int d = a[i] - a[i - 1];
        //     if (d == 1)
        //     {
        //         p = 0;
        //         continue;
        //     }
        //     else if (d == 2)
        //     {
        //         if (p)
        //         {
        //             a[i]--;
        //             p = 1;
        //         }
        //         else if (p == 0)
        //         {
        //             a[i - 1]++;
        //             p = 0;
        //         }
        //     }
        //     else if (d == 3)
        //     {
        //         if (p)
        //         {
        //             flag = 0;
        //             break;
        //         }
        //         else
        //         {
        //             a[i - 1]++;
        //             a[i]--;
        //             p = 1;
        //         }
        //     }
        //     else
        //     {
        //         flag = 0;
        //         break;
        //     }
        // }
        // if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}