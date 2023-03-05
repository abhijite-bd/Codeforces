#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for(int i=0; i<str.size(); i++)
    {
        if(i==0)
        {
            str[i]=toupper(str[i]);
        }
        cout<<str[i];
    }
    cout<<endl;
    return 0;
}
