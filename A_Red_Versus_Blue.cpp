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
    int t, n, r, b, i;
    cin >> t;
    while (t--)
    {
        cin >> n >> r >> b;
        int a = n / (b + 1), j = 0;
        cout << a << endl;
        if (n % (b + 1) == 0){
            cout<<'R';
            
        }

        for (i = 0; i < n; i++)
        {
            if (j == a)
            {
                cout << 'B';
                j = 0;
            }
            else
            {
                j++;
                cout << j;
            }
        }

        cout << endl;
    }
    return 0;
}