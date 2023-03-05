#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
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
    int n,k,i,j,r=0,l=0,t1=0,t2=0;
    cin>>n>>k;
    int a[n],b[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    for(i=0; i<n; i++) {
        cin>>b[i];
    }
    for(i=0; i<n; i++) {
        t1+=b[i];
        r+=max(0,a[i]-t1*k) ;
    }
    for(i=n-1; i>=0; i--) {
        t2+=b[i];
        l+=max(0,a[i]-t2*k) ;
    }
    if(r>l)
        cout<<"Limak"<<endl;
    else if(r<l)
        cout<<"Radewoosh"<<endl;
    else
        cout<<"Tie"<<endl;
    return 0;
}
