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
    int a, b, k, i;
    cin >> a >> b >> k;
    if (k % 2 == 0)
    {
        if (a > b)
        {
            for (i = 0; i < k / 2; i++)
            {
                cout << "01";
            }
            cout << string(b - k / 2, '1');
            cout << string(a - k / 2, '0');
        }
        else
        {
            for (i = 0; i < k / 2; i++)
            {
                cout << "10";
            }
           cout << string(a - k / 2, '0');
            cout << string(b - k / 2, '1');
        }
    }
    else
    {
        if (a > b)
        {
            for (i = 0; i < k / 2; i++)
            {
                cout << "01";
            }
            cout << string(a - k / 2, '0');
            cout << string(b - k / 2, '1');
        }
        else
        {
            for (i = 0; i < k / 2; i++)
            {
                cout << "10";
            }
            cout << string(b - k / 2, '1');
            cout << string(a - k / 2, '0');
        }
    }
    cout << endl;
    return 0;
}