#include<bits/stdc++.h>
using namespace std;
flip(char a)
{
    return (a=='1'? '0' : '1');
}
int main()
{
    char a[16];
    int i,len;
    gets(a);
    len=strlen(a);
    for(i=0; i<len; i++) {
        a[i]=flip(a[i]);
    }
    cout<<"1's complement :"<<a<<endl;

    int carry=1;
    for(i=len-1; i>=0; i--) {
        if(a[i]=='1' and carry==1)
            a[i]='0';
        else if(a[i]=='0' and carry==1) {
            a[i]='1';
            carry=0;
        }
    }
    cout<<"2's complement :"<<a<<endl;

    return 0;
}
