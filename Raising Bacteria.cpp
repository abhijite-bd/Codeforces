#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    long int a,s=0;
    cin>>a;
   while(a>0)
   {
       s+=a%2;
       a/=2;
   }
   cout<<s;
    return 0;

}
