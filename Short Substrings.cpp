#include<iostream>
#include<cstring>
using namespace std;
void str1(string s)
{
    cout<<s[0];
    for(int j=1; j<s.size(); j++)
    {
        if(s[j]==s[j+1])
        {
            j++;
        }
        cout<<s[j];
    }
}
int main()
{
    int n,i;
    string s;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s;
        str1(s);
        cout<<endl;
    }
    return 0;
}
