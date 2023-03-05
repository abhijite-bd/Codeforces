#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int i,n1,flag=0;
    char s1[101],s2[101],s3[201];

    cin>>s1>>s2>>s3;

    strcat(s1,s2);
    n1=strlen(s3);
    sort(s3,s3+n1);
    sort(s1,s1+n1);
    for(i=0; i<n1; i++)
    {
        if(s3[i]!=s1[i])
        {
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}
