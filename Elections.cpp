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
    ll t,a,b,c;
    cin>>t;
    while(t--) {
        cin>>a>>b>>c;
        ll ans1=max3(a,b,c);

        if(ans1==a ) {
            if(a==b or a==c)
                cout<<1<<ss;
            else cout<<0<<ss;
        } else cout<<ans1-a+1<<ss;

        if(ans1==b ) {
            if(a==b or b==c)cout<<1<<ss;
            else cout<<0<<ss;
        } else  cout<<ans1-b+1<<ss;

        if(ans1==c ) {
            if(c==b or a==c)cout<<1;
            else  cout<<0;
        } else cout<<ans1-c+1;
        cout<<endl;
    }
    return 0;
}