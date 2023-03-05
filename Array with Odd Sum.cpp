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
    int t,a,n,i,sum=0,j,o,e;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        o=0;
        e=0;
        sum=0;
        for(j=0; j<n; j++) {
            cin>>a;
            if(a%2==0)
                e++;
            else
                o++;
            sum+=a;
        }
        if(sum%2==0) {
            if(e!=0 and o!=0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        } else
            cout<<"YES\n";
    }
    return 0;
}
