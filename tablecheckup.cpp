#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
int main()
{
int b,*p,*q,temp,e;
int a;
cout <<"enter the table  who you want to you check??" <<endl;
p=new int[10];
q=new int[10];
for(int i=0;i<10;i++)
{
    cin >>p[i];
}
for(int i=0;i<10;i++)
{
    q[i]=p[i];
}
int n=p[0];
for(int i=0;i<9;i++)
{
    for(int j=i+1;j<10;j++)
    {
        if(q[j]>q[i])
        {
            temp=q[j];
            q[j]=q[i];
            q[i]=temp;
        }
    }
}
 a=q[0];
int c=0,d=0;
while(a!=0)
{
    a/=10;
    d+=1;
}
for(int i=0;i<10;i++)
{
b=n*(i+1);
cout <<p[i];
e=p[i];
while(p[i]!=0)
{
p[i]=p[i]/10;
c=c+1;
}
for(int k=1;k<=d-c;k++)
cout<<" ";
if(b==e)
{
    cout << " right" <<endl;
}
else 
cout <<" wrong" <<endl;
c=0;
}


    return 0;
}