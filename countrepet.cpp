#include<iostream>
using namespace std;
int main()
{
   int i,num,x;
   int counti=0;
    int a;
   cout<<"enter the number";
   cin>>num;
    a=num;
   cout<<"enter the number to count";
   cin>>x;

  for(i=0;i<=a;i++)
  {
     int res;
     res=num%10;
     num=num/10;
     if(res==x)
     counti++;
  }
  cout<<counti;
}
