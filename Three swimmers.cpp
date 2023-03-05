#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define ll long long int
#define max(a,b,c) max(a,max(b,c))
#define min(a,b,c) min(a,min(b,c))
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define ss " "
using namespace std;
int main()
{
    ll a[3],t,n,i,j,p,m[3],r,d,ans;
    cin>>t;
    while(t--) {
        cin>>p;
        j=0;
        for(i=0; i<3; i++) {
            cin>>a[i];
            if(a[i]==p) {
                m[j]=0;
                j++;
            } else {
                if(a[i]<p) {
                    r=p%a[i];
                    d=p/a[i];
                    if(r==0) {
                        m[j]=d*a[i]-p;
                        j++;
                    } else {
                        m[j]=(d+1)*a[i]-p;
                        j++;
                    }
                } else {
                    m[j]=a[i]-p;
                    j++;
                }
            }
        }
        sort(m,m+3);
        cout<<m[0]<<endl;
    }
    return 0;
}
