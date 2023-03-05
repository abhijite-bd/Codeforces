#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define ss " "
using namespace std;
int main()
{
    int t,i,j,n,m;
    cin>>t;
    for(i=0; i<t; i++) {
        int c=0;
        cin>>n>>m;
        int a[n],b[m];
        for(j=0; j<n; j++) {
            cin>>a[j];
        }
        for(j=0; j<m; j++) {
            cin>>b[j];
        }
        sort(a,a+n);
        sort(b,b+m);
        for(j=0; j<n; j++) {
            for(int k=0; k<m; k++) {
                if(a[j]==b[k]) {
                    c++;
                    break;
                }
                if(a[j]<b[k])
                    break;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
