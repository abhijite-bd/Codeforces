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
int sum(int n)
{
    int a,i,r,s=0;
    a=n;
    while(a!=0) {
        r=a%10;
        a/=10;
        s+=r;
    }
    if(s%4==0)
        return n;
    else {
        s=0;
        n++;
        sum(n);
    }
}
int main()
{
    int n,f;
    cin>>n;
    f=sum(n);
    cout<<f<<endl;
    return 0;
}
