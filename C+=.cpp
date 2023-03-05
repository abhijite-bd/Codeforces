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
    ll a,b,n,i,t,s,f;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>a>>b>>n;
        ll s=0,c=0;
        while(s<=n) {
            if(a>b) {
                b+=a;
                s=b;
                c++;
            } else {
                a+=b;
                s=a;
                c++;
            }
            if(s>n)
                break;
        }
        cout<<c<<endl;
    }
    return 0;
}
