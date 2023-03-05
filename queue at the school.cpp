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
    int n,t,i,temp;
    cin>>n>>t;
    char a[n];
    cin>>a;
    while(t--) {
        for(i=1; i<n; i++) {
            if(a[i]=='G') {
                temp= a[i-1];
                a[i-1]=a[i];
                a[i]=temp;
                i++;
            }
        }
    }
    for(i=0; i<n; i++) {
        cout<<a[i];
    }
    return 0;
}
