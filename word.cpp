#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0,m=0,d=s.size();
    for(int i=0; i<d; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            c++;
        else
            m++;
    }
    if(m>=c)
    {
        for(int i=0; i<d; i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    else
    {
        for(int i=0; i<d; i++)
        {
            s[i]=toupper(s[i]);
        }
    }
    for(int i=0; i<d; i++)
    {
        cout<<s[i];
    }
    return 0;
}
