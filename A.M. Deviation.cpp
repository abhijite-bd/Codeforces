#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
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
ll rem,t,a[3],b;
cin>>t;
while(t--){
cin>>a[0]>>a[1]>>a[2];
sort(a,a+3);
rem=abs(a[0]+a[2]-2*a[1]);
rem%3==0?cout<<0<<endl:cout<<1<<endl;
}
return 0;
}
