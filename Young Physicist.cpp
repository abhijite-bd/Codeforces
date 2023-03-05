#include<iostream>
using namespace std;
int main()
{
    int a,b,c,n,sum_1=0,sum_2=0,sum_3=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        sum_1+=a;
        sum_2+=b;
        sum_3+=c;
    }
    if(sum_1==0 && sum_2==0 && sum_3==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
