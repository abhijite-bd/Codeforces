#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
int composite(int a)
{
    for(int i=2; i<=a/2; i++) {
        if(a%i==0) {
            return 1;
            break;
        }
    }
    return 0;
}
int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=4; i<=n/2; i++) {
        j=composite(i);
        if(j==1) {
            k=composite(n-i);
            if(j==k) {
                cout<<i<<" "<<n-i<<endl;
                break;
            }
        }
    }
    return 0;
}
