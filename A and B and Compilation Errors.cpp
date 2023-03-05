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
    ll a=0,b=0,c=0,i,n,x;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>x;
        a+=x;
    }
    for(i=0; i<n-1; i++) {
        cin>>x;
        b+=x;
    }
    for(i=0; i<n-2; i++) {
        cin>>x;
        c+=x;
    }
    cout<<a-b<<endl;
    cout<<b-c<<endl;

    return 0;
}
