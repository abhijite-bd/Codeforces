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
    int t,i,d,j,n;
    cin>>t;
    while(t--) {
        cin>>n>>d;
        int a[n];
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        sort(a,a+n);

        if(a[n-1]<=d)
            cout<<"YES\n";
        else {
            if(a[0]+a[1]<=d)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}
