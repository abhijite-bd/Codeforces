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
    int n,i,c=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    int mx=a[0];
    int mn=a[0];
    for(i=0; i<n; i++) {
        if(a[i]>mx) {
            mx=a[i];
            c++ ;
        }
        if(a[i]<mn) {
            mn=a[i];
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
