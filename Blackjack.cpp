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
  int t,a,b,c;
  cin>>t;
  while(t--)
  {
      cin>>a>>b;
      c=21-a-b;
      if(c<=10)
      cout<<c<<endl;
      else
      cout<<-1<<endl;
  }
return 0;
}