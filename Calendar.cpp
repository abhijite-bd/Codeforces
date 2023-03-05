#include<bits/stdc++.h>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
#define   pb push_back
using namespace std;
int main()
{
    int a[]= {31,28,31,30,31,30,31,31,30,31,30,31};
    int day,mon,i,j;
    cin>>day>>mon;
    if(mon>12 or a[mon-1]<day)
        cout<<"Impossible\n";
    else {
        int total=day;
        for(i=0; i<mon-1; i++) {
            total+=a[i];
        }
        if(total%7==0)
            cout<<7<<endl;
        else
            cout<<total%7<<endl;
//        if(total%7==1)
//            cout<<"Monday"<<endl;
//        else if(total%7==2)
//            cout<<"Tuesday"<<endl;
//        else if(total%7==3)
//            cout<<"Wednesday"<<endl;
//        else if(total%7==4)
//            cout<<"Thursday"<<endl;
//        else if(total%7==5)
//            cout<<"Friday"<<endl;
//        else if(total%7==6)
//            cout<<"Saturday"<<endl;
//        else
//            cout<<"Sunday"<<endl;
    }
    return 0;
}
