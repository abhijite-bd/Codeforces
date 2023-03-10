/*
███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
███████████████████████████████████████            ████             ████   ███████   ██████████████████████████████████████████
████████████████████████████████████████████████   ████   ███████   ████   ███████   ██████████████████████████████████████████
████████████████████████████████████████████████   ████   ███████   ████   ███████   ██████████████████████████████████████████
████████████████████████████████████████████████   ████   ███████   ████             ██████████████████████████████████████████
███████████████████████████████████████  ███████   ████   ███████   █████████   ███████████████████████████████████████████████
███████████████████████████████████████  ███████   ████   ███████   █████████   ███████████████████████████████████████████████
███████████████████████████████████████            ████             █████████   ███████████████████████████████████████████████
███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
███████████████████████            ████   █████████   ████             ████            ████             ███████████████████████
███████████████████████   █████████████   █████████   ████   ███████   ████   █████████████   █████████████████████████████████
███████████████████████   █████████████   █████████   ████   ███████   ████   █████████████   █████████████████████████████████
███████████████████████            ████               ████             ████           █████            ████████████████████████
████████████████████████████████   ████   █████████   ████   ████   ███████   █████████████   █████████████████████████████████
████████████████████████████████   ████   █████████   ████   ██████   █████   █████████████   █████████████████████████████████
███████████████████████            ████   █████████   ████   ███████   ████            ████             ███████████████████████
███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
███████████   █████   ████             ████   ████            ████   ████████   ████      ██████   ████              ██████████
███████████   ████   █████   ███████   ████   ████   █████████████   ████████   ████   █   █████   ████   ████████   ██████████
███████████   ███   ██████   ███████   ████   ████   █████████████   ████████   ████   ██   ████   ████   ████████   ██████████
███████████        ███████             ████   ████            ████              ████   ███   ███   ████              ██████████
███████████   ███   ██████   ████   ███████   █████████████   ████   ████████   ████   ████   ██   ████   ████████   ██████████
███████████   ████   █████   ██████   █████   █████████████   ████   ████████   ████   █████   █   ████   ████████   ██████████
███████████   █████   ████   ███████   ████   ████            ████   ████████   ████   ██████      ████   ████████   ██████████
███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
█████              ████             ████   █████████   ████   ████             ████   ████               ████             █████
█████   ████████   ████   ████████  ████   █████████   ████   ██████████████   ████   ██████████   ██████████   ███████████████
█████   ████████   ████   ████████  ████   █████████   ████   ██████████████   ████   ██████████   ██████████   ███████████████
█████              ████             ████               ████   ██████████████   ████   ██████████   ██████████            ██████
█████   ████████   ████   ████████  ████   █████████   ████   ████   ███████   ████   ██████████   ██████████   ███████████████
█████   ████████   ████   ████████  ████   █████████   ████   ████   ███████   ████   ██████████   ██████████   ███████████████
█████   ████████   ████             ████   █████████   ████   ████             ████   ██████████   ██████████             █████
███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
*/
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
    int i, j, k, l, x, y, n, t;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        int s[10][10];
        n = 10;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                s[i][j] = 0;
            }
        }
        s[x][y] = 1;

        if (x == 1 and y == 1)
            s[3][2] = 2;
        else if (x == 8 and y == 1)
            s[6][2] = 2;
        else if (x == 1 and y == 8)
            s[2][6] = 2;
        else if (x == 8 and y == 8)
            s[6][7] = 2;
        else if (x == 1)
        {
            s[3][y - 1] = 2;
            s[3][y + 1] = 2;
        }
        else if (x == 8)
        {
            s[6][y - 1] = 2;
            s[6][y + 1] = 2;
        }
        else if (y == 1)
        {
            s[x - 1][3] = 2;
            s[x + 1][3] = 2;
        }
        else if (y == 8)
        {
            s[x - 1][6] = 2;
            s[x + 1][6] = 2;
        }
        else if (x == 2 and y == 7)
        {
            s[1][4] = 2;
            s[4][8] = 2;
        }
        else if (x == 2 and y == 2)
        {
            s[1][y + 2] = 2;
            s[5][y - 1] = 2;
        }

        else if (x == 7 and y == 7)
        {
            s[8][4] = 2;
            s[5][8] = 2;
        }
        else if (x == 2 and y == 2)
        {
            s[5][1] = 2;
            s[8][5] = 2;
        }
        else if (x == 7)
        {
            s[x + 1][y + 2] = 2;
            s[4][y - 1] = 2;
        }
        else if (x == 2)
        {
            s[1][y + 2] = 2;
            s[5][y - 1] = 2;
        }
        else if (y == 2)
        {
            s[x + 2][1] = 2;
            s[x - 1][5] = 2;
        }
        else if (y == 7)
        {
            s[x + 2][8] = 2;
            s[x - 1][4] = 2;
        }
        else
        {
            if (x <= 8 - x)
            {
                s[x - 1][y + 2] = 2;
                s[x + 3][y - 1] = 2;
            }
            else
            {
                s[x - 3][y + 1] = 2;
                s[x + 1][y - 2] = 2;
            }
        }
        for (i = 1; i <= 8; i++)
        {
            for (j = 1; j <= 8; j++)
            {
                cout << s[i][j] << ss;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
// 1 1
// 1 2
// 1 3
// 1 4
// 1 5
// 1 6
// 1 7 
// 1 8