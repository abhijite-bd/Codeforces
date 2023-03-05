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
bool prime(ll p)
{
    ll i,n=p;
    if(p==2)
        return true;
    for(i=2; i*i<=n; i++) {
        if(p%i==0)
            return false;
    }
    return true;
}
int main()
{
    ll t,n,i,j;
    cin>>t;
    while(t--) {
        cin>>n;
        int flag=0;
        if(n%2!=0) {

            for(i=3; i<=n/2; i+=2) {
                if(n%i==0) {
                    if(prime(i)) {
                        if(prime(n/i)) {
                            flag=1;
                            break;
                        }
                    }
                }
            }
        } else {
            for(i=2; i<=n/2; i++) {
                if(n%i==0) {
                    if(prime(i)) {
                        if(prime(n/i)) {
                            flag=1;
                            break;
                        }
                    }
                }
            }
        }

        if(flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
