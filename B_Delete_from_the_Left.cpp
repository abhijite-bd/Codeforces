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
    string s1, s2;
    cin >> s1 >> s2;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    int n = s1.size() + s2.size();
    for (int i = 0; i < min(s1.size(), s2.size()); i++)
    {
        if (s1[i] == s2[i])
            n -= 2;
        else
        {
            break;
        }
    }
    cout << n << endl;
    return 0;
}