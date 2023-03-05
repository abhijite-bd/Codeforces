#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,cap=0,d,small=0;

    for(i=1; i<s.size(); i++)
    {
        if(isupper(s[i]))
            cap++;
    }
    if(cap==s.size()-1)
    {
        for(i=0; i<s.size(); i++)
        {
            if(isupper(s[i]))
                s[i]= tolower(s[i]);
            else
                s[i]= toupper(s[i]);
        }
    }
    cout<<s<<endl;
    return 0;

}
