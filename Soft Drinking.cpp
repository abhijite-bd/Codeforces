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
int n,k,l,c,d,nl,np,p;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int b=k*l;
int ci=c*d;
int di=p/np;
int mi=min(b/nl,min(ci,di));
cout<<mi/n;
return 0;
}
