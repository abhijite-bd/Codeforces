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
    int t,p1,p2,v1,v2,t1,t2;
    cin>>t>>v1>>v2>>t1>>t2;
    p1=t*v1+2*t1;
    p2=t*v2+2*t2;
//    cout<<p1<<endl;
//    cout<<p2<<endl;
    if(p1==p2)
        cout<<"Friendship\n";
    else if(p1>p2)
        cout<<"Second\n";
    else
        cout<<"First\n";
    return 0;
}
