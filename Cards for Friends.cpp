#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    long int t,a,b,n,i,s=1;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>a>>b>>t;
        while (a % 2 == 0) {
            a /= 2;
            s *= 2;
        }
        while (b % 2 == 0) {
            b /= 2;
            s *= 2;
        }
        cout << (s >= t ? "YES\n" : "NO\n");
        s=1;
    }
    return 0;
}
