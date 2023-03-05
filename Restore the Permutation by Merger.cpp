#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    int t,n,i,j,nb,c,k;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        int a[2*n],g=0,flag=0;
        for(j=0; j<2*n; j++) {
            cin>>a[j];
            g++;
            if(g==1) cout<<a[j]<<" ";
            else {
                for(k=0; k<g-1; k++) {
                    if(a[j]==a[k]) {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    cout<<a[j]<<" ";
                flag=0;
            }
        }
        cout<<endl;

    }
    return 0;
}
