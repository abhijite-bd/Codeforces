#include<bits/stdc++.h>
#define   ss ' ' 
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   fast() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
#define   pb push_back
#define   all(v) v.begin(),v.end()
#define   allr(v) v.rbegin(),v.rend()
#define   endl '\n' 
#define   pi 3.14159265359
using namespace std;
int main()
{
  int a,b,c,d,t;
  cin>>t;
  while(t--)
  {
      cin>>a>>b>>c;
      d=max3(a,b,c);
      if(d==a)
      cout<<"Setter\n";
      else if(d==b)
      cout<<"Tester\n";
      else
      cout<<"Editorialist\n";
  }
return 0;
}