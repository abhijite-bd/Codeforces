#include<bits/stdc++.h>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss ' ' 
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
#define   pb push_back
using namespace std;
int main()
{
  int a[4];
  int i,sum1,sum2;
  for (i = 0; i < 4; i++)
  {
      cin>>a[i];
  }
  sort(a,a+4);
  sum1=a[0]+a[3];
  sum2=a[1]+a[2];
  cout<<abs(sum2-sum1)<<endl;
return 0;
}