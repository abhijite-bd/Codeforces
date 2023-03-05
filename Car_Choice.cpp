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
    int t;
    double c1, c2, l1, l2, car1, car2;
    cin >> t;
    while (t--)
    {
        cin >> l1 >> l2 >> c1 >> c2;
        car1 = (double)c1 / l1;
        car2 = (double)c2 / l2;
        if (car1 == car2)
            cout << 0 << endl;
        else if (car1 < car2)
            cout << -1 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}