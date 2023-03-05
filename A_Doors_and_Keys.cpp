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
    int n, i, j, t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int r = 0, R = 0, g = 0, b = 0, B = 0, G = 0;
        int flag = 1;
        for (i = 0; i < s.size(); i++)
        {

            if (s[i] == 'g')
                g++;
            else if (s[i] == 'r')
                r++;
            else if (s[i] == 'b')
                b++;
            else if (s[i] == 'G')
            {
                if (g == 0)
                    flag = 0;
            }
            else if (s[i] == 'R')
            {
                if (r == 0)
                    flag = 0;
            }
            else if (s[i] == 'B')
            {
                if (b == 0)
                    flag = 0;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}