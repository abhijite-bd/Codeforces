#include<iostream>
using namespace std;
int main()
{
    int price,money,item,total=0;
    cin>>price>>money>>item;
    for(int i=1; i<=item; i++)
    {
        total+=i*price;
    }
    if(money>=total)
        cout<<0<<endl;
    else
        cout<<total-money<<endl;
    return 0;
}
