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
    int t,n,i,j,ans,temp;
    cin>>t;
    while(t--) {
        cin>>n;
        ll a[n];
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        ans=0;
        i=0;
        while(1) {
            if(a[i]>a[i+1]) {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                ans++;
                for(auto e:a)
                    cout<<e<<ss;
                cout<<endl;
                continue;
            }
            i++;
            if(i==n-1)
                break;
        }
        cout<<ans<<endl;
    }
    return 0;
}
