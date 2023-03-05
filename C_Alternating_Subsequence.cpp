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
    ll t, n, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll p = 0, preposnumber = 0, prenegnumber = INT_MIN, possum = 0, negsum = 0;
        int poscount = 0, negcount = 0;
        bool pos, prepos = 0, preneg = 0;

        for (i = 0; i < n; i++)
        {

            pos = a[i] > 0 ? true : false;
            if (prepos != pos)
            {
                poscount++;
                possum += a[i];
                preposnumber = a[i];
                prepos = pos;
            }
            else if (a[i] > 0)
            {
                if (preposnumber < a[i])
                {
                    possum += (a[i] - preposnumber);
                    preposnumber = a[i];
                    prepos = pos;
                }
            }
            // 0 != 1
            // preneg=1
            // 0 != 0
            // -1 > -2
            // 0 != 1
            // 0 != 0
            if (pos != !preneg)
            {

                negcount++;
                negsum += a[i];
                prenegnumber = a[i];
                preneg = a[i] < 0 ? true : false;
            }
            else if (a[i] < 0)
            {

                if (prenegnumber < a[i])
                {
                    // negsum = negsum + a[i] - preposnumber;
                    negsum += (a[i] - prenegnumber);
                    prenegnumber = a[i];
                    preneg = a[i] < 0 ? true : false;
                }
            }
            // cout<<preposnumber<<ss<<prenegnumber<<endl;
            // cout << possum << ss << negsum << endl;
        }
        // cout<<poscount<<ss<<negcount<<endl;

        if (poscount > negcount)
            cout << possum << endl;

        else if (poscount < negcount)
            cout << negsum << endl;
        else
            cout << max(possum, negsum) << endl;
    }
    return 0;
}