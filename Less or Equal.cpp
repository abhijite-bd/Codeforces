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
    ll n,k,i,j,x;
    cin>>n>>k;
    ll a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a,a+n);
    if(k==0) {
        if(a[0]==1)
            cout<<-1<<endl;
        else
            cout<<1<<endl;
    }
    for(i=0; i<n; i++) {
        if(i+1==k) {
            x=a[i];
            if(a[i]==a[i+1]) {
                cout<<-1<<endl;
                return 0;
            } else
                cout<<x<<endl;
        }
    }
    return 0;
}
