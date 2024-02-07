#include<iostream>
using namespace std;
int main()
{
   int num;
   int sum=0;
   cin>>num;
   int i;
   int x;
   x=num;
   for(i=1;i<=x/2;i++)
   {
       if(num%i==0)
       {
           sum=sum+i;
       }
   }
   if(sum==x){
    cout<<"Perfect";
   }
   else{
    cout<<"not perfect";
    }
}
