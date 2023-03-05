#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        int l=strlen(s);
        if(l>10)
            cout<<s[0]<<(l-2)<<s[l-1]<<endl;
        else
            cout<<s<<endl;
    }
    return 0;
}
