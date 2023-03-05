#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define ss " "
using namespace std;
int main()
{
    int n,m,x;
    cin>>n>>m;
    if(m>n)
        cout<<-1<<endl;
    else {
        if(n%2 ==0)
            x=n/2;
        else
            x=n/2+1;
        while(x%m !=0) {
            x++;
        }
    cout<<x<<endl;
    }
    return 0;
}
