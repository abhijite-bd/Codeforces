#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string>
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
    ll t,n,i,j,total;
    cin>>t;
    while(t--) {
        total=0;
        j=0;
        cin>>n;
        ll a[n];
        for(i=0; i<n; i++) {
            cin>>a[i];
            total+=a[i];
        }
        ll mn=total/n;
        ll mx=ceil(total/(double)n);
        cout<<mx-mn<<endl;
    }
    return 0;
}
