#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
using namespace std;
int main()
{
    unsigned long long int t,i,buyer,total;
    ll n;
    cin>>t;
    while(t--) {
        cin>>n;
        unsigned long long int a[n];
        total=0;
        buyer=0;
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        sort(a,a+n);
            total=n/2;
        total=a[total];
        for(i=0; i<n; i++) {
            if(a[i]>=total)
                buyer++;
        }
        cout<<buyer*total<<endl;
    }
    return 0;
}
