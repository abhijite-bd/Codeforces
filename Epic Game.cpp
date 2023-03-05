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
    int a,b,n,r=0;
    cin>>a>>b>>n;
    while(n>0) {
        n-=__gcd(a,n);
        if(n<=0) {
            cout<<0<<endl;
            return 0;
        }
        n-=__gcd(b,n);
        if(n<=0) {
            cout<<1<<endl;
            return 0;
        }
    }
}
