using namespace std;
#include<iostream>
int add(int=0,int=0,int=0);
int main()
{
  int a,b,c;
  cout<<"Enter the number"<<endl;
  cin>>a>>b;
  c=add(3,7,8);
  cout<<c;


}
int add(int x,int y)
{
  return x+y;
}
int add(int x,int y,int z)
{
  return x+y+z;
}
