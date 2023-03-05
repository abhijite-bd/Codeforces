#include<iostream>
using namespace std;
int main()
{
    int n,i,d,a;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        if(a<=2)
            cout<<0<<endl;
        else
        {
            d=a%2;
            if(d==0)
                cout<<a/2-1<<endl;
            else
                cout<<a/2<<endl;
        }
    }
    return 0;
}
