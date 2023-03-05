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
int off()
{
    cout<<"NO"<<endl;
    return 0;
}
int main()
{
    int n,i,j,p,q;
    cin>>n;
    int a[n][n];
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            cin>>a[i][j];
        }
    }
    int flag;
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if(a[i][j]!=1) {
                flag=0;
                for(p=0; p<n; p++) {
                    for(q=0; q<n; q++) {
                        if(a[i][p]+a[q][j]==a[i][j] and (i!=q and j!=p)) {
                            flag=1;
                            break;
                        }
                    }
                }
            }
            if(flag==0) {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
