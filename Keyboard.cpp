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
    char c;
    cin>>c;
    char a[31]= {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    char b[101];
    cin>>b;
    for(int i=0; i<strlen(b); i++) {
        for(int j=0; j<30; j++) {
            if(b[i]==a[j]) {
                if(c=='R')
                    cout<<a[j-1];
                else
                    cout<<a[j+1];
                break;
            }
        }
    }
    return 0;
}
