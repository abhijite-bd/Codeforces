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
    int n,t,i,j,ans,flag;
    cin>>t;
    while(t--) {
        flag=1;
        cin>>n;
        char a[2][n];
        for(i=0; i<2; i++) {
            for(j=0; j<n; j++) {
                cin>>a[i][j];
            }
        }
        for(i=0; i<n; i++) {
            if(a[0][i]-'0'+a[1][i]-'0'==2) {
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
