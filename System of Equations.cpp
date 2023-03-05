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
    int n,m,a,b,cnt(0);
    cin>>n>>m;
    for(a=0; a<=n*n; a++) {
        b=n-a*a;
        if(a+b*b==m and b>=0)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
