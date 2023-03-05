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
    ll t,n,a,b,temp,c,d;
    cin>>t;
    while(t--) {
        cin>>a>>b;
        cin>>c>>d;
        if(a>b)
            swap(a,b);
        if(c>d)
            swap(c,d);
//        cout<<a<<ss<<b<<ss<<c<<ss<<d<<endl;
        if(a+c==b and a+c==d)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
