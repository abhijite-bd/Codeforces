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
    string s;
    int a, b, i;
    cin >> a >> b;
    int ans = a - b;
    s = to_string(ans);
    if (s[0] == '9')
        s[0] = '8';
    else
        s[0] = char(s[0] + 1);
    cout << s << endl;
    return 0;
}