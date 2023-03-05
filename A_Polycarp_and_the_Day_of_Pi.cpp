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
using namespace std;
int main()
{
    string st = "314159265358979323846264338327";
    string s;
    int k, i, j, t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        k = 0;
        for (i = 0, j = 0; i < s.size(); i++)
        {
            if (s[i] == st[i])
            {
                k++;
            }
            else
                break;
        }
        cout << k << endl;
    }
    return 0;
}