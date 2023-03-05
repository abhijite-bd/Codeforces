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
    string s1;
    cin>>s1;
    int d1,i,c=0,j,k;
    d1=s1.size();
    for(i=0; i<=d1; i++)
        for(j=i+1; j<=d1; j++)
            for(k=j+1; k<=d1; k++)
                if(s1[i]=='Q'&& s1[j]=='A' && s1[k]=='Q')
                    c++;
    cout<<c<<endl;
    return 0;
}
