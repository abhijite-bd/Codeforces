#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,count=0;
    char s[101];
    cin>>n;
    cin>>s;
    for(i=0; i<n; i++)
    {
        if(isupper(s[i]))
            s[i]=tolower(s[i]);
    }
    sort(s,s+n);
    for(i=0; i<n; i++)
    {
        count++;
        if(s[i]==s[i+1])
            count--;
    }
    if(count==26)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
