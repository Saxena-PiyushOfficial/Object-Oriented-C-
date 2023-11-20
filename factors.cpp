using namespace std;
#include<iostream>
int main()
{
   int i,n;
   cout<<"Enter the number"<<endl;
   cin>>n;
   for(i=2;i<=n; )
   {
      if(n%i==0)
      {
        cout<<i<<endl;
        n=n/i;
      }
      else
      {
        i++;
      }
   }
}
