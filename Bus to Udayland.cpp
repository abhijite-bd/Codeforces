#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
using namespace std;
int main()
{
    int n,i,f=0,j;
    cin>>n;
    char c[n][6];
    for(i=0; i<n; i++) {
        for(j=0; j<5; j++) {
            cin>>c[i][j];
        }
    }
    for(i=0; i<n; i++) {
        for(j=0; j<5; j++) {
            if(c[i][j]=='O' and f==0 and j==0 ) {
                if(c[i][j+1]=='O') {
                    c[i][j]='+';
                    c[i][j+1]='+';
                    f++;
                }
            } else if(c[i][j]=='O' and f==0 and j==3) {
                if(c[i][j+1]=='O') {
                    c[i][j]='+';
                    c[i][j+1]='+';
                    f++;
                }
            }
        }
    }
    if(f==0)
        cout<<"NO\n";
    else {
        cout<<"YES"<<endl;
        for(i=0; i<n; i++) {
            for(j=0; j<5; j++) {
                cout<<c[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
