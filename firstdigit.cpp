#include<iostream>
using namespace std;
int main()
{
   int i,num,x,a;
   int res;
   cout<<"enter the number";
   cin>>num;
    a=num;
  for(i=0;i<=a;i++)
  {
     res=num%10;
     num=num/10;
  }
  cout<<res;
}
