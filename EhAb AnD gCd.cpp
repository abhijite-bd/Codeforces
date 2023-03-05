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
    int i,n,t;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        if(n%2==0)
            cout<<n/2<<" "<<n/2<<endl;
        else
            cout<<1<<" "<<n-1<<endl;
    }
    return 0;
}
