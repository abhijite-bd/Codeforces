#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define ss " "
using namespace std;
int main()
{
    int t,i,j,n;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        for(j=0; j<n; j++) {
            cout<<n<<ss;
        }
        cout<<endl;
    }
    return 0;
}
