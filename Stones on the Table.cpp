#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int n,c=0;
    cin>>n;
    cin>>str;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]==str[i+1])
            c++;
    }
    cout<<c;
    return 0;
}
