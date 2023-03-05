#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define ss " "
using namespace std;
int main()
{
    int  t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        bool flag=false;
        for (int i=1; i<=n; i++) {
            int ai;
            cin>>ai;
            if (ai%2==0&&!flag) {
                cout<<1<<endl;
                cout<<i<<endl;
                flag=true;
            }
        }
        if(flag)
            continue;
        if(n<=1)
            cout<<-1<<endl;
        else{
            cout<<2<<endl;
            cout<<1<<" "<<2<<endl;
        }
    }
    return 0;
}
