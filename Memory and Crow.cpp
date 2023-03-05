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
    ll t,n,i,j;

    cin>>n;
    ll a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    for(i=0; i<n; i++) {
        if(i==n-1)
            cout<<a[n-1]<<endl;
        else
            cout<<a[i]+a[i+1]<<ss;
    }
    cout<<endl;
    return 0;
}
