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
    int n,a,b,c,d,e,f,i=0,cup=0,med=0;
    cin>>a>>b>>c;
    cin>>d>>e>>f;
    cin>>n;
    cup=a+b+c;
    med=d+e+f;
    while(cup>0) {
        cup-=5;
        i++;
    }
    while(med>0) {
        med-=10;
        i++;
    }
    if(i<=n)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
