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
    ll n,i,j,mx=-1,c=1;
    cin>>n;
    ll a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    if(n==1)
        cout<<1<<endl;
    else if(n==2) {
        if(a[1]>=a[0])
            cout<<2<<endl;
        else
            cout<<1<<endl;
    } else {
        for(i=0; i<n-1; i++) {
            if(a[i]<=a[i+1]) {
                c++;
                if(c>mx)
                    mx=c;
            } else
                c=1;
        }
        if(c>mx)
        mx=c;
        cout<<mx<<endl;
    }
    return 0;
}
