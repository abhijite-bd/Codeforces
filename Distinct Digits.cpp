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
int digit(int l)
{
    int a[6];
    int i=0,k=0;
    while(l!=0) {
        a[i]=l%10;
        l/=10;
        i++;
        k++;
    }
    sort(a,a+k);
    for(i=0; i<k-1; i++) {
        if(a[i]==a[i+1])
            return 0;
    }
    return 1;
}
int main()
{
    int l,r;
    cin>>l>>r;
    while(l<=r) {
        int f=digit(l);
        if(f==1) {
            cout<<l<<endl;
            return 0;
        }
        l++;
    }
    cout<<-1<<endl;
    return 0;
}
