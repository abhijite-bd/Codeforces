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
    int m,n,i,j,p,t;
    cin>>t;
    while(t--) {
        cin>>n>>m;
        int x=-1;
        int y=-1;
        int p=0,f=0;
        char a[n][m],b[n][m],c[n][m];

        for(i=0; i<n; i++) {
            for(j=0; j<m; j++) {
                if(i%2==0) {
                    if(j%2==0)
                        a[i][j]='W';
                    else
                        a[i][j]='R';
                } else {
                    if(j%2==0)
                        a[i][j]='R';
                    else
                        a[i][j]='W';
                }
            }
        }
        for(i=0; i<n; i++) {
            for(j=0; j<m; j++) {
                if(i%2==0) {
                    if(j%2==0)
                        b[i][j]='R';
                    else
                        b[i][j]='W';
                } else {
                    if(j%2==0)
                        b[i][j]='W';
                    else
                        b[i][j]='R';
                }

            }
        }
        for(i=0; i<n; i++) {
            for(j=0; j<m; j++) {
                cin>>c[i][j];
                if(c[i][j]!='.') {
                    if(c[i][j]!=a[i][j])
                        p++;
                    if(c[i][j]!=b[i][j])
                        f++;
                }
            }
        }
        if(p==0) {
            cout<<"YES\n";
            for(i=0; i<n; i++) {
                for(j=0; j<m; j++) {
                    cout<<a[i][j];
                }
                cout<<endl;
            }
        } else if(f==0) {
            cout<<"YES\n";
            for(i=0; i<n; i++) {
                for(j=0; j<m; j++) {
                    cout<<b[i][j];
                }
                cout<<endl;
            }
        } else
            cout<<"NO\n";
    }
    return 0;
}



















