#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,d=0,e=0,f=0;
    string str;
    cin>>str;
    for(i=0; i<str.size(); i++)
    {
        if(str[i]=='1')
            d++;
        else if(str[i]=='2')
            e++;
        else if(str[i]=='3')
            f++;
        else if(str[i]=='+')
            continue;
    }
    for(i=1; i<=d; i++)
    {
        if(i==d&&(e==0&&f==0))
            cout<<1<<endl;
        else
            cout<<1<<"+";
    }
    for(i=1; i<=e; i++)
    {
        if(i==e&&f==0)
            cout<<2<<endl;
        else
            cout<<2<<"+";
    }
    for(i=1; i<=f; i++)
    {
        if(i==f)
            cout<<3<<endl;
        else
            cout<<3<<"+";
    }

    return 0;
}
