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
    int n,t,i,j,temp;
    cin>>t;
    while(t--) {
        cin>>n;
        int a[n+1];
        for(i=1; i<=n; i++) {
            a[i]=i;
        }
        if(n%2==0) {
            for(i=1; i<=n; i++) {
                if(i%2==1) {
                    temp=a[i];
                    swap(a[i],a[i+1]);
                    swap(a[i+1],temp);
                }
            }
        } else {
            for(i=1; i<=n-3; i++) {
                if(i&1) {
                    temp=a[i];
                    swap(a[i],a[i+1]);
                    swap(a[i+1],temp);
                }
            }
        }
        a[i]=n-1;
        a[i+1]=n;
        a[i+2]=n-2;
        for(i=1; i<=n; i++) {
            cout<<a[i]<<ss;
        }
        cout<<endl;
    }
    return 0;
}
