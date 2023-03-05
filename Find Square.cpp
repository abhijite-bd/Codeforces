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
    int n,m,left,right,up,down,flag=0,i,j;
    cin>>n>>m;
    char a[n+5][m+5];

    for(i=1; i<=n; i++) {
        for(j=1; j<=m; j++) {
            cin>>a[i][j];
            if(flag==0 and a[i][j]=='B') {
                left=j;
                up=i;
                flag=1;
            }
            if(flag==1 and a[i][j]=='B') {
                right=j;
                down=i;
            }
        }
    }

//    cout<<up<<ss<<left<<ss<<down<<ss<<right<<endl;
    cout<<(up+down)/2<<ss<<(left+right)/2<<endl;
    return 0;
}
