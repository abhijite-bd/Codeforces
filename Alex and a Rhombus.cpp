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
    int n,i=0,s=0;
    cin>>n;
    while(n>0) {
        if(i==0) {
            s=2*n-1;
            i++;
        } else
            s+=(2*n-1)*2;
        n--;
    }
    cout<<s<<endl;
    return 0;
}
