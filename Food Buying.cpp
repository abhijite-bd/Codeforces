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
    ll n,a,sum,r;
    cin>>n;
    while(n--) {
        cin>>a;
        sum=a;
        while(a>9) {
            r=a%10;
            sum+=a/10;
            a/=10;
            a+=r;
        }
        cout<<sum<<endl;
    }
    return 0;
}
