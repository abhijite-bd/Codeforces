#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int d=s.size(),flag=1,j=0,k=0;
    for(int i=0; i<d; i++)
    {
        if(s[i]=='W' and i<d)
        {
            if(s[i+1]=='U' and i+1<d)
            {
                if(s[i+2]=='B' and i+2<d)
                {
                    i+=2;
                    flag=0;
                }
            }
        }
        if(flag)
        {
            if(j==0)
            {
                j++;
                cout<<s[i];
            }
            else
            {
                if(k-i==-1)
                {
                    cout<<s[i];
                }
                else
                {
                    cout<<" "<<s[i];
                }
            }
            k=i;
        }
        flag=1;
    }

    return 0;
}
