
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
    ll t, a, b, k, c, i, j;
    int n=1000009;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    vector<int> v;
    for(int i=2; i<n; i++) {
        if(prime[i]==true) {
            v.push_back(i);
        }
    }
    cin >> t;
    while (t--) {
        cin >> a >> b >> k;
        if (k == 1) {
            if (a == 1 and b == 1) {
                cout << "NO\n";
                continue;
            }
            if (a == b) {
                cout << "NO\n";
                continue;
            }
            if (a % b == 0 or b % a == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
            // continue;
        } else {
            ll sum = 0;
            // cout<<sum<<endl;
            while (a % 2 == 0) {
                a /= 2;
                sum++;
            }
            for (i = 0; v[i]<= sqrt(a) and i < v.size(); i++) {
                while (a % v[i] == 0) {
                    sum++;
                    a /= v[i];
                }
            }
            if (a > 2)
                sum++;

            while (b % 2 == 0) {
                b /= 2;
                sum++;
            }
            for (i = 0; v[i] <= sqrt(b) and i < v.size(); i++) {
                while (b % v[i] == 0) {
                    b /= v[i];
                    sum++;
                }
            }
            if (b > 2)
                sum++;

            if (k <= sum)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
