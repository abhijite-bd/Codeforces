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
    int n, k, i, j;
    cin >> n >> k;
    vector<int> v(n);
    vector<pair<int, int>> ans;
    int total = 0;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        ans.pb({v[i], i});
    }
    if (k == 1)
    {
        // for (i = 0; i < n; i++)
        // {
        //     total += ans[i].first;
        // }
        cout << *max_element(v.begin(), v.end())<<endl;;
        cout << n << endl;
    }
    else
    {

        sort(ans.begin(), ans.end(), [&](const pair<int, int> &a, const pair<int, int> &b)
             { return a.first > b.first; });

        sort(ans.begin(), ans.begin() + k, [&](const pair<int, int> &a, const pair<int, int> &b)
             { return a.second < b.second; });
        for (i = 0; i < k; i++)
        {
            total += ans[i].first;
        }
        cout << total << endl;
        for (i = 0; i < k; i++)
        {
            if (i == 0)
            {
                cout << ans[i].second + 1 << ss;
            }
            else if (i != k - 1)
            {
                cout << ans[i].second - ans[i - 1].second << ss;
            }
            else
                cout << n - ans[i - 1].second - 1 << ss;
        }
    }
    return 0;
}