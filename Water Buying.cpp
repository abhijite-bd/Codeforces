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
#define   max(a,b,c) max(max(a,b),b)
#define   min(a,b,c) min(min(a,b),c)
using namespace std;
int main()
{
    ll a,t,n,s,b;
    cin>>t;
    while(t--) {
        cin>>n>>a>>b;
        if(n%2==0)
            s=0;
        else {
            s=0;
            s+=a;
            n--;
        }
        if(n*a<n*b/2)
            s+=n*a;
        else
            s+=n*b/2;
            cout<<s<<endl;
        }
            return 0;
        }
