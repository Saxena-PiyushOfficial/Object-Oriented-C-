using namespace std;
#include<iostream>
int main()
{
   int i,n,num,sum=0;
   cout<<"enter the number"<<endl;
   cin>>n;
   for(i=1;i<=n;i++)
   {
     cout<<"Enter the num"<<endl;
     cin>>num;
        sum=sum+num;
   }

   cout<<"sum is="<<sum<<endl;
}
