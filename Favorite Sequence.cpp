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
    int n,t,i,j,v;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        ll a[n];
        for(j=0; j<n; j++) {
            cin>>a[j];
        }
        j=0;
        v=0;
        while(1) {
            if(j%2==0) {
                cout<<a[v]<<" ";
                v++;
            } else {
                cout<<a[n-v]<<" ";
            }
            j++;
            if(j==n)
                break;
        }
        cout<<endl;
    }
    return 0;
}
