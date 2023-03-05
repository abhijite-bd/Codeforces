#include<iostream>
using namespace std;
int main()
{
int i,n;
double sum=0,a;
cin>>n;
for(i=0;i<n;i++)
{
cin>>a;
sum+=a/100;
}
sum=sum*100/n;
printf("%.12lf\n",sum);

return 0;
}
