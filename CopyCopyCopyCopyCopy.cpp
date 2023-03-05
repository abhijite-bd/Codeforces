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
    int t,i,n,j;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        int a[n],c=1;
        for(j=0; j<n; j++) {
            cin>>a[j];
        }
        sort(a,a+n);
        for(j=0; j<n-1; j++) {
            if(a[j]!=a[j+1])
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
