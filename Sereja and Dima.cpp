#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
#define ss " "
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    i=0;
    int j=n-1,mx,k=0,sum1=0,sum2=0;
    while(i<=j) {
        if(a[i]>=a[j]) {
            mx=a[i];
            i++;
        } else {
            mx=a[j];
            j--;
        }
        if(k%2==0)
            sum1+=mx;
        else
            sum2+=mx;
        k++;
    }
    cout<<sum1<<ss<<sum2<<endl;
    return 0;
}

