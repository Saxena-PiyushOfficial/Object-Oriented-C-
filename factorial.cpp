using namespace std;
#include<iostream>
#include"fac.cpp"
int main()
{
   int num,ans;
   cout<<"Enter the number";
   cin>>num;
   ans=fact(num);
   cout<<"Factorial is "<<ans;
}
