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
    int t,n,i,sum,j,x;
    cin>>t;
    while(t--) {
        sum=0;
        cin>>n>>x;
        int a[n];
        for(i=0; i<n; i++) {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum==x)
            cout<<"NO\n";
        else{
            cout<<"YES\n";
        for(i=0; i<n; i++) {
            if(a[i]==x)
                swap(a[i],a[i+1]);
            cout<<a[i]<<ss;
            x-=a[i];
        }
        cout<<endl;}
    }
    return 0;
}
