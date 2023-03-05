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
    int t,i,n,s,j,f,g;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        g=0;
        char c[1001]= {},c1[1000];
        for(j=0; j<n; j++) {
            cin>>c1;
            strcat(c,c1);
        }
        int d=strlen(c);
        sort(c,c+d);
//        cout<<d<<endl;
//        cout<<c<<endl;
        if(n==1)
            cout<<"YES\n";
        else if(d%n!=0)
            cout<<"NO\n";
        else {
            f=1;
            for(j=0; j<d-1; j++) {
                if(c[j]==c[j+1])
                    f++;
                else {
                    if(f%n==0) {
                        f=1;
                        continue;
                    } else {
                        g=1;
                        break;
                    }
                }
            }
            if(g==0) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}
