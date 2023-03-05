#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    long int a[n],sum=0;
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0; i<n; i++) {
        sum+=a[n-1]-a[i];
    }
    cout<<sum<<endl;
    return 0;
}
