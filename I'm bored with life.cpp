#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
using namespace std;
long long int factorial(ll a)
{
    return(a==1||a==0)?1:a*factorial(a-1);
}
int main()
{
    ll a,b;
    cin>>a>>b;
    a=min(a,b);
    a=factorial(a);
    cout<<a<<endl;
    return 0;
}
