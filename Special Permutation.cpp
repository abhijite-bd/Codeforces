#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
using namespace std;
#define ll long long int
int main()
{
    int i,t,n,j;
    cin>>t;
    for(int k=0; k<t; k++) {
        cin>>n;
        int a[n];
        for(j=n,i=1; j>=1; j--,i++) {
            a[i]=j;
        }
        for(j=1; j<=n; j++) {
            if(j==a[j]) {
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
        for(j=1; j<=n; j++) {
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
