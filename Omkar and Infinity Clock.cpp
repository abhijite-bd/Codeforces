#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define ss " "
using namespace std;
int main()
{
    ll m,t,i,j,k,n,d;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n>>k;
        m=0;
        ll a[n];
        for(j=0; j<n; j++) {
            cin>>a[j];
            if(m<a[j])
                m=a[j];
        }

        for(j=0; j<n; j++) {
            cout<<m-a[j]<<ss;
        }
        cout<<endl;
    }
    return 0;
}
