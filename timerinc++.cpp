#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int h,m,s;
    double i;
    cout <<"......Time is start from Now......\n";
for(h=0;h<60;h++)
{
for(m=0;m<60;m++)
{
for(s=0;s<60;s++)
{
cout <<h<<":" <<m <<":"<<s <<"\n" ;
for(double i=0;i<399999999;i++)
i++;
i--;
}
}
}
   return 0;
}