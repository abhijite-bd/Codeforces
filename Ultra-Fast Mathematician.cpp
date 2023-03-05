#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    char m[105],n[105];
    cin>>m>>n;
    for(i=0; i<strlen(m); i++)
    {
        if((m[i]=='1'&& n[i]=='1')||(m[i]=='0'&& n[i]=='0'))
            cout<<0;
        else
            cout<<1;
    }
    return 0;
}

