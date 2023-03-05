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
    // fast();
    int t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 3)
            cout << -1 << endl;
        else
        {
            for(int i = n;i>=5;i--){
                cout<<i<<" ";
            }
            cout<<1<<" "<<2<<" "<<4<<" "<<3<<" "<<endl;
        }
    }
    return 0;
}