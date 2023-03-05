#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define ss " "
using namespace std;
int main()
{
    int n,i,c=0;
    string s;
    cin>>s;
    n=s.size();
    if(n==1)
        cout<<1<<endl;
    else {
        for(i=0; i<n; i++) {
            if(s[i]=='a')
                c++;
        }
        while(1)
        {
            int m=n/2+1;
            if(c>=m)
                break;
            n--;
        }
        cout<<n<<endl;
    }

    return 0;
}
