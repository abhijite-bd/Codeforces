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
    int t,i,n,a,s1,s2,j;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        s1=0;
        s2=0;
        for(j=0; j<n; j++) {
            cin>>a;
            if(a==1)
                s1++;
            else
                s2++;
        }
        if(s1%2==1)
            cout<<"NO\n";
        else {
            if(s2%2==1 and s1%2==0) {
                if(s1>0)cout<<"YES\n";
                else cout<<"NO\n";

            } else
                cout<<"YES\n";
        }
    }
    return 0;
}
