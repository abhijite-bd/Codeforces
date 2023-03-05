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

    int n,i,s1=0,s2=0,j;
    cin>>n;
    char c[n][n],c1,c2;
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            cin>>c[i][j];
            c1=c[0][0];
            if(c[i][j]==c1)
                s1++;
        }
    }
    if(s1==n*2-1) {
        int f=1;
        for(i=0; i<n; i++) {
            for(j=0; j<n; j++) {

                if(i==0 or i==n-1) {
                    if(j==0 or j==n-1) {
                        if(c[i][j]!=c1) {
                            f=0;
                            break;
                        }
                    }
                } else if(i==j or j==n-i-1) {
                    if(c[i][j]!=c1) {
                        f=0;
                        break;
                    }
                }

            }
        }
        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    } else
        cout<<"NO\n";
    return 0;
}
