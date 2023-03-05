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
    int t,n,i,j,c,sum,p;
    cin>>t;
    while(t--) {
        cin>>n;
        int a[n];
        p=0;
        sum=0;
        for(i=0; i<n; i++) {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n!=0)
            cout<<-1<<endl;
        else {
            c=sum/n;
            for(i=0; i<n; i++) {
                if(a[i]>c)
                    p++;
            }
            cout<<p<<endl;
        }
    }
    return 0;
}
