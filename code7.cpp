#include<iostream>
using namespace std;
int main()
{
  int n=100;
  cout<<"the numbers from 1 to "<<n<<" are: "<<endl;
  int i=1;
  while(i<=100)
  {
      cout<<i<<" ";
      i++;
  }
  cout<<"-----------------------------------------------------------------------"<<endl;
  int j=1,summ=0;
  while(j>=-100)
  {
      cout<<j<<" ";
      summ+=j;
      j--;
  }
  cout<<"negative: "<<summ<<endl;
   i=1;
   int sum=0;
   while(i<=100)
  {
          sum+=i;
        i++;
  }
    cout<<"the sum is="<<sum<<" ";
  cout<<endl;
  i=1;
  int tot=0;
   while(i<=100)
  {
      if(i%2==0){
          cout<<i<<" ";
          tot+=i;
      }


      i++;
  }
  cout<<"the total is="<<tot<<" ";
  cout<<"The End ";
}
