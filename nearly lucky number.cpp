#include<iostream>
using namespace std;
int main()
{
       unsigned long long int n,d;
       int c=0,f=0;
        cin>>n;
        while(n!=0)
        {
            d=n%10;
            if(d==7|| d==4)
            {
                f++;
            }
            n/=10;
        }
        if(f==7|| f==4)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    return 0;
}
