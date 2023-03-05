#include<iostream>
using namespace std;
int main()
{
    long long k,n,d,r;
    cin>>n>>k;
    d=n/2;
    r=n%2;
    if(d+r<k)
        cout<<(k-d-r)*2<<endl;
    else
        cout<<k*2-1<<endl;
    return 0;
}
