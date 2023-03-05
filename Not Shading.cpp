#include<bits/stdc++.h>
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
    int t,n,m,r,c,ans,i,j;
    cin>>t;
    while(t--) {
        cin>>n>>m>>r>>c;
        int black=0;
        char a[n][m];
        for(i=0; i<n; i++) {
            for(j=0; j<m; j++) {
                cin>>a[i][j];
                if(a[i][j]=='B')
                    black=1;
            }
        }
        if(black==0)
            cout<<-1<<endl;
        else {
            if(a[r-1][c-1]=='B')
                cout<<0<<endl;
            else {
                int flag=0;
                for(i=0; i<m; i++) {
                    if(a[r-1][i]=='B') {
                        flag=1;
                        break;
                    }
                }
                if(!flag) {
                    for(i=0; i<n; i++) {
                        if(a[i][c-1]=='B') {
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag)
                    cout<<1<<endl;
                else
                    cout<<2<<endl;
            }
        }
    }
    return 0;
}
