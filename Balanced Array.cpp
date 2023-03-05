#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>

using namespace std;
long int sum=0;
void peven(long int a)
{
    for(int i=2; i<=a; i+=2) {
        cout<<i<<" ";
        sum+=i;
    }
}
void podd(long int a)
{
    for(int i=1; i<=a; i+=2) {
        if(i==a-1)
            cout<<sum<<endl;
        else {
            sum-=i;
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n,i;
    long int a;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>a;
        int d=a/2;
        if(d%2==1)
            cout<<"NO\n";
        else {
            cout<<"YES\n";
            peven(a);
            podd(a);
            sum=0;
        }
    }
    return 0;
}
