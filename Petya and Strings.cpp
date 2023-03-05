#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int a=1,i;
    cin>>s1;
    cin>>s2;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    for(i=0; i<s1.size(); i++)
    {
        if(s1[i]>s2[i])
        {
            cout<<1<<endl;
            a=0;
            break;
        }
        else if(s1[i]<s2[i])
        {
            cout<<-1<<endl;
            a=0;
            break;
        }
    }
    if(a)
        cout<<0<<endl;
    return 0;
}
