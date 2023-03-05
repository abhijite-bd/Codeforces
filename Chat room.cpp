#include<iostream>
using namespace std;
int main()
{
    string chat,word="hello";
    cin>>chat;
    int a=0,count=0;
    for(int i=0; i<chat.size(); i++)
    {
        if(chat[i]==word[a])
        {
            a++;
            count++;
        }

    }
    if(count==5)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
