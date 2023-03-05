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
#define pi 3.14159265359
using namespace std;
int main()
{
    int n, i, j, k;
    cin >> n;
    string s[n];
    int a[n][n], mx[n + n];
    // memset(mx, 0, sizeof(mx));
    for (i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (i = 0; i < n; i++)
    {
        mx[i] = 0;
        for (j = 0; j < n; j++)
        {
            a[i][j] = (s[i][j] - '0');
            if (a[i][j] > mx[i])
                mx[i] = a[i][j];
        }
    }
    // cout << mx[3] << endl;
    for (i = 0; i < n; i++)
    {
        mx[n + i] = mx[i];
    }
    int loc;
    loc = max_element(mx, mx + n) - mx;
    string s1 = "", s2 = "";

    for (i = loc; i < n + loc; i++)
    {
        s1 += to_string(mx[i]);
    }
    for (i = n + loc; i > loc; i--)
    {
        s2 += to_string(mx[i]);
    }
    // if (s1 > s2)
    //     cout << s1 << endl;
    // else if (s2 > s1)
    //     cout << s2 << endl;
    // else
    //     cout << s1 << endl;
    // cout << loc << endl;
    for (i = 0; i < n; i++)
    {
        if (s1[i] > s2[i])
        {
            cout << s1 << endl;
            return 0;
        }
        else if (s1[i] < s2[i])
        {
            cout << s2 << endl;
            return 0;
        }
    }
    cout << s1 << endl;
    // cout << s1 << ss << s2 << endl;
    return 0;
}