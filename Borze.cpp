#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i;
    for(i=0; i<s.size(); i++) {
        if(s[i]=='.')
            cout<<0;
        else {
            i++;
            if(s[i]=='.')
                cout<<1;
            else
                cout<<2;
        }
    }
    cout<<endl;
    return 0;
}
