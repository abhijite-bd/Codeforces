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
    ll t,n,i;

    cin>>n;
    ll a[n];
    ll neg=0,ans=0,zero=0;
    for(i=0; i<n; i++) {
        cin>>a[i];
        if(a[i]<0)
            neg++;
    }

    sort(a,a+n,greater<int>());


    for(i=0; i<n; i++) {
        if(a[i]>1)
            ans+=(a[i]-1);

        if(a[i]==0) {
            if(neg>0) {
                zero++;
            }
            ans+=1;
        }

        if(a[i]<0) {
            if(neg%2==0) {
                ans+=(-1-a[i]);
            } else if(zero>0) {
                ans+=(-1-a[i]);
                zero--;
                if(neg%2!=0)
                    neg--;
            } else {
                ans+=(1-a[i]);
                neg--;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
