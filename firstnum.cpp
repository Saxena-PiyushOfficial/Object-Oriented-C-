#include<iostream>
using namespace std;
int main()
{
int i,num;
int rev=0,mod;
cin>>num;
while(num!=0)
{

mod=num%10;
rev=rev * 10 +mod;
num=num/10;
}
int first;
first=rev%10;
cout<<first;
}
