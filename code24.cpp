#include<iostream>
using namespace std;
void acceptElements(int[],int);
void displayElements(int[],int);
int addElements(int[],int);
int main()
{
    const int MAX_VAL=50;
    int n=MAX_VAL;
    int arr[n];
    acceptElements(arr,n);
    displayElements(arr,n);
    cout<<endl;
    int sum=addElements(arr,n);
    cout<<sum;

}
void acceptElements(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {

       arr[i]=i*4;
   }

}
void displayElements(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }

}
int addElements(int arr[],int n)
{
    int sum=0;
   for(int i=0;i<n;i++)
   {
       sum+=arr[i];
   }
   return sum;
}
