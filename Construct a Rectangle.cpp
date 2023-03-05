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
    ll t,i,n=3;
    cin>>t;
    while(t--) {
        ll a[n];
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        sort(a,a+n);
        if(a[0]+a[1]==a[2])
            cout<<"YES"<<endl;
        else if(a[0]==a[1] and a[2]%2==0)
            cout<<"YES"<<endl;
        else if(a[1]==a[2] and a[0]%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO\n";
    }
    return 0;
}
