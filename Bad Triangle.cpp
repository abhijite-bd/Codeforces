//#include<iostream>
//#include<math.h>
//#include<algorithm>
//#include<cstring>
//#include<array>
//#include<vector>
//#include<queue>
//#define ll long long int
//#define   gcd(a,b)   __gcd(a,b)
//#define   lcm(a,b)   (a*b)/gcd(a,b)
//#define ss " "
//using namespace std;
//int main()
//{
//    ll t,n,i,j,s,f;
//    cin>>t;
//    while(t--) {
//        cin>>n;
//        ll a[n];
//        s=0;
//        for(i=1; i<=n; i++) {
//            cin>>a[i];
//        }
//        s=a[1]+a[2];
//        f=0;
//        ll i1=1,i2=2,i3=0;
//        for(i=3; i<=n; i++) {
//            if(a[i]>=s) {
//                i3=i;
//                f=1;
//                break;
//            }
//        }
//        f==1?cout<<i1<<ss<<i2<<ss<<i3<<endl:cout<<-1<<endl;
//    }
//    return 0;
//}
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
    ll t,n,i,j,s,f;
    cin>>t;
    while(t--) {
        cin>>n;
        ll a[n];
        for(i=1; i<=n; i++) {
            cin>>a[i];
        }
        s=a[1]+a[2];
        s<=a[n]?cout<<1<<ss<<2<<ss<<n<<endl:cout<<-1<<endl;
    }
    return 0;
}
