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
    int t, i, n, j;
    cin >> t;
    while (t--)
    {
        string s;
        int a = 0, b = 0;
        cin >> s;
        n = s.size();
        int flag = 0;
        for (i = 0; i < n; i++)
        {
            if (s[i] == 'A')
                a++;
            else
                b++;
            if (b > a)
                flag = 1;
        }
        if (s[n - 1] != 'B')
            flag = 1;
        if (flag)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}