#include<iostream>
using namespace std;
int main()
{
    int a,b,c,temp;
    string s1,s2;
    cin>>s1>>s2;
    c=s1.size();
    a=0;
    b=c-1;
    for(int i=0; i<c/2; i++)
    {
        //code
        temp=s1[i];
        s1[i]=s1[b];
        s1[b]=temp;
        b--;
    }
    if(s1==s2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
