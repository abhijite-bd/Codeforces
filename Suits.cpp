#include<bits/stdc++.h>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
#define   pb push_back
using namespace std;
int main()
{
    ll a,b,c,d,e,f,c1=0,c2=0,ans,c3=0,c4=0;
    cin>>a>>b>>c>>d>>e>>f;
    if(e>f) {
        c1=min(a,d)*e;
        d-=min(a,d);
        c2=min3(b,c,d)*f;
    } else {
        c2=min3(b,c,d)*f;
        d-=min3(b,c,d);
        c1=min(a,d)*e;
    }
    cout<<c1+c2<<endl;
    return 0;
}
