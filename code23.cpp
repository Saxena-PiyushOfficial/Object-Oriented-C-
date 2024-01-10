#include<iostream>
using namespace std;
int main()
{
    int n=5;
   // cout<<"Enter the array length: "<<endl;
    //cin>>n;
    int arr[n],x;
    for(int i=0;i<n;i++)
   {
       cout<<"enter the elements";
       cin>>x;
       arr[i]=x;
   }
     for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";


   }
}
