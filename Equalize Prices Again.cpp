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
    int t,n,i,sum,j,r;
    ll a;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        sum=0;
        for(j=0; j<n; j++) {
            cin>>a;
            sum+=a;
        }
        r=sum%n;
        r>0? cout<<sum/n+1<<endl:cout<<sum/n<<endl;
    }
    return 0;
}
