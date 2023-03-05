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
    int t, n, i, j;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> n;
        cin >> s;
      
        int ans = n;
        for (i = 1; i <= n; i++)
        {
            if (s[i - 1] == s[i] and i != 1)
                ans--;
            // q = p.substr(0, i - 1) + p.substr(i, n);
            // // cout<<q<<endl;
            // st.insert(q);
        }
        if (s[0] == s[1])
            ans--;
        cout << ans << endl;
    }
    return 0;
}