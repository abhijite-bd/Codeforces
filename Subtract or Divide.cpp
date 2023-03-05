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
    int t,i,j,n;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        if(n==1)
            cout<<0<<endl;
        else {
            if(n==3)
                cout<<2<<endl;
            else if(n==2)
                cout<<1<<endl;
            else {
                if(n%2==0)
                    cout<<2<<endl;
                else
                    cout<<3<<endl;
            }
        }
    }
    return 0;
}
