#include<bits/stdc++.h>
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
ll factorial(int n)
{
    if(n==1)
        return 1;
    else
        return n*factorial(n-1);
}
int main()
{
int n;
cin>>n;
cout<<factorial(n)<<endl;
unsigned long int i=2;
int a[2];
a[i]=3;
return 0;
}
