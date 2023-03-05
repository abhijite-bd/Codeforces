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
    int t,n,a,b,i,j;
    cin>>t;
    while(t--) {
        cin>>n;
        int d[n][n];
        for(i=0; i<n; i++) {
            for(j=0; j<n; j++) {
                if(i==j or j==n-i-1)
                    d[i][j]=1;
                else
                    d[i][j]=0;
            }
        }
        if(n&1) {
            for(i=1; i<n; i++) {
                for(j=0; j<n; j++) {
                    if(d[i-1][j]==1 and d[i][j]==0 and d[i+1][j]==1)
                        d[i][j]=1;
                }
            }
            for(i=0; i<n; i++) {
                for(j=0; j<n-2; j++) {
                    if(d[i][j]==1 and d[i][j+1]==0 and d[i][j+2]==1)
                        d[i][j+1]=1;
                }
            }
            for(i=0; i<n; i++) {
                for(j=0; j<n; j++) {
                    cout<<d[i][j]<<ss;
                }
                cout<<endl;
            }
        } else {
            for(i=0; i<n; i++) {
                for(j=0; j<n; j++) {
                    cout<<d[i][j]<<ss;
                }
                cout<<endl;
            }
        }

    }
    return 0;
}
