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
    int t, n, i, j, mx;
    string s;

    while (cin >> n and n != 0)
    {
        string ans[n];
        mx = 0;
        for (i = 0; i < n; i++)
        {
            cin >> s;
            ans[i]="Abhijite";
            int space = 0, k = 0;
            for (j = 0; j < s.size(); j++)
            {
                if (s[j] == ' ')
                    if (space == 0)
                        continue;
                    else
                    {
                        ans[i][k] = s[j];
                        k++;
                        space = 0;
                    }
                else
                {
                    ans[i][k] = s[j];
                    k++;
                    space = 1;
                }
            }
            cout<<ans[i]<<endl;
        }
    }
    return 0;
}