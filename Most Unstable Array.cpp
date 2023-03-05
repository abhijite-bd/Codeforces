#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#include<stack>
#define test() int tt; cin>>tt; while(tt--)
#define ll long long int
using namespace std;
int main()
{
    ll a,b;
    int t,i,n;
    test() {
        cin>>a>>b;
        if(a==1)
            cout<<0<<endl;
        else if(a==2)
            cout<<b<<endl;
        else
            cout<<2*b<<endl;
    }
    return 0;
}
