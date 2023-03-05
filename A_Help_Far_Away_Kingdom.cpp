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
    string s, ans = "";
    cin >> s;
    int i, j, k, l;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
            break;
    }
    if (s[i - 1] == '9')
    {
        cout << "GOTO Vasilisa." << endl;
        return 0;
    }
    else
    {
        if (s[i + 1] - '0' >= 5)
            s[i - 1] += 1;
    }
    for (j = 0; j < i; j++)
    {
        cout << s[j];
    }
    cout << endl;
    return 0;
}