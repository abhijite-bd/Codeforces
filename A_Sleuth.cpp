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
    string s;
    getline(cin, s);
    //   remove(all(s),' ');
    s.erase(remove(all(s), ' '), s.end());
    transform(all(s), s.begin(), ::tolower);
    // cout << s << endl;
    int n = s.size();
    if (s[n - 2] == 'a' or s[n - 2] == 'e' or s[n - 2] == 'i' or s[n - 2] == 'o' or s[n - 2] == 'u' or s[n - 2] == 'y')
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}