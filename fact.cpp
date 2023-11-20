using namespace std;
#include<iostream>
int main()
{
   int i,n,fact=1;
   cout<<"enter the number"<<endl;
   cin>>n;
   for(i=1;i<=n;i++)
   fact=fact*i;

   cout<<"fact is="<<fact<<endl;
}
