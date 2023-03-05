#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
using namespace std;
int main()
{
    string s;
    int d,i,sum=0,e;
    cin>>s;
    e=s[0]-97;
    if(e>13)
        e=26-e;
    for(i=0; i<s.size()-1; i++) {
        d=abs((s[i]-s[i+1]));
        if(d>13)
            d=26-d;
        sum+=d;
    }
    cout<<sum+e<<endl;
    return 0;
}
