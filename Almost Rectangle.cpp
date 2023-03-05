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
    int t,i,n,j,x1,y1,x2,y2,k;
    cin>>t;
    while(t--) {
        cin>>n;
        k=0;
        char c[n][n];
        for(i=0; i<n; i++) {
            for(j=0; j<n; j++) {
                cin>>c[i][j];
                if(c[i][j]=='*') {
                    if(k==0) {
                        x1=i;
                        y1=j;
                        k++;
                    } else {
                        x2=i;
                        y2=j;
                    }
                }
            }
        }
        if(x1!=x2 and y1!=y2) {
            c[x1][y2]='*';
            c[x2][y1]='*';
        } else {
            if(y1==y2) {
                if(y1==0) {
                    c[x1][y1+1]='*';
                    c[x2][y2+1]='*';
                } else {
                    c[x1][y1-1]='*';
                    c[x2][y2-1]='*';
                }
            } else {
                if(x1==0) {
                    c[x1+1][y1]='*';
                    c[x1+1][y2]='*';
                } else {
                    c[x1-1][y1]='*';
                    c[x1-1][y2]='*';
                }
            }
        }
        for(i=0; i<n; i++) {
            for(j=0; j<n; j++) {
                cout<<c[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
