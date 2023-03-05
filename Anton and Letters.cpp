#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    char s[1002];
    int i,l,c=0;
    gets(s);
    l=strlen(s);
    sort(s,s+l);
    for(i=0; i<l-1; i++)
    {
        if(s[i]>='a' and s[i]<='z')
        {
            c++;
            if(s[i]==s[i+1])
            {
                c--;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
