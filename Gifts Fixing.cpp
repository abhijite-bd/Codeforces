#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
using namespace std;

int main()
{
    ll i,j,t,n,mn1,mn2;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        ll a[n],b[n],sum=0,s1,s2;
        for(j=0; j<n; j++) {
            cin>>a[j];
        }
        for(j=0; j<n; j++) {
            cin>>b[j];
        }
        mn1=a[0];
        for(j=0; j<n; j++) {
            if(a[j]<mn1) {
                mn1=a[j];
            }
        }
        mn2=b[0];
        for(j=0; j<n; j++) {
            if(b[j]<mn2) {
                mn2=b[j];
            }
        }
        for(j=0; j<n; j++) {
            s1=abs(a[j]-mn1);
            s2=abs(b[j]-mn2);
            sum+=max(s1,s2);
        }
        cout<<sum<<endl;
    }
    return 0;
}
