
#include<iostream>
using namespace std;
int main()
{
  int arr[100];
  int n,sum=0;

  cout<<"Enter the number to get sum of"<<endl;
  cin>>n;
  cout<<endl;
  for(int i=0;i<n;i++)
  {
      arr[i]=i*3;
      if(arr[i]>n)
      {
          break;
      }
  }
    cout<<endl;
   for(int i=0;arr[i]<n;i++)
  {
      cout<<arr[i]<<" ";
  }
  cout<<endl;
  for(int j=0;arr[j]<n;j++)
  {
    sum+=arr[j];
  }
  cout<<"The sum is : "<<sum;



}
