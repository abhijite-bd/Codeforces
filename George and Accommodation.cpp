#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0,a,b,d;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        d=b-a;
        if(d>=2)
            count++ ;
    }
    cout<<count<<endl;
    return 0;
}
