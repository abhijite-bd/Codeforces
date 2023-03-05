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
    int n,a,b,i;
    cin>>n;
    if(n%2==0) {
        a=n/2;
        cout<<a<<endl;
        for(i=0; i<n/2; i++) {
            cout<<2<<" ";
        }
    } else {
        a=n/2-1;
        cout<<a+1<<endl;
        for(i=0; i<a; i++) {
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
    return 0;
}
