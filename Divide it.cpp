#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
using namespace std;
int main()
{
    signed long long int t,n,k;
    cin>>t;
    while(t--) {
        cin>>n;
        k=0;
        while(n>1) {
            k++;
            if(n%2==0)
                n/=2;
            else if(n%3==0) {
                n/=3;
                n*=2;
            } else if(n%5==0) {
                n/=5;
                n*=4;
            } else {
                k=-1;
                break;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}
