
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
    int n,i,temp;
    cin>>n;
    if(n%2==1)
        cout<<-1<<endl;
    else {
        int a[n];
        for(i=0; i<n; i++) {
            a[i]=i+1;
        }

        sort(a,a+n,greater<int>());

        for(i=0; i<n-1; i++) {
            if(a[i]==i+1) {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(i=0; i<n; i++) {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
