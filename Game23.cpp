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
    int m,n,j,p,k;
    cin>>n>>m;
    if(m%n !=0) {
        cout<<-1<<endl;
    }
    else {
        k=1,p=0;
        j=m/n;
        while(j) {
            if(j==1)
                break;
            if(j%2==0) {
                j/=2;
                ++p;
            } else if(j%3==0) {
                j/=3;
                ++p;
            } else {
                k=0;
                cout<<-1<<endl;
                break;
            }
        }
        if(k)
            cout<<p<<endl;
    }

    return 0;
}
