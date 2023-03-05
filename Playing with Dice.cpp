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
    int a,b,f=0,i,s=0,d=0;
    cin>>a>>b;
    for(i=1; i<=6; i++) {
        if(abs(a-i)<abs(b-i))
            f++;
        else if(abs(b-i)<abs(a-i))
            s++;
        else
            d++;
    }
    cout<<f<<ss<<d<<ss<<s<<endl;
    return 0;
}
