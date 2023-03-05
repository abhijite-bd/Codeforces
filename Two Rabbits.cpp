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
    int n,i,j,t;
    ll x,y,a,b,c;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>x>>y>>a>>b;
        cout << ((y - x) % (a + b) == 0 ? (y - x) / (a + b) : -1) << endl;
    }
    return 0;
}
