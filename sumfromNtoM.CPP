#include<iostream>
using namespace std;
int main()
{
   int num1,num2,i;
   int sum=0;
   cout<<"enter the starting number";
   cin>>num1;
   cout<<"enter the ending number";
   cin>>num2;
   for(i=num1;i<=num2;i++)
   {
      sum=sum+i;
      num1++;
   }
  cout<<sum;
}
