using namespace std;
#include<iostream>
int add(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
int add(int x,int y,int w)
{
    int z;
    z=x+y+w;
    return z;
}
float add(float x,float y)
{
    float z;
    z=x+y;
    return z;
}
int main()
{
  int a=5,b=9,c;
  c=add(a,b);
  cout<<c<<endl;
  c=add(10,20,30);
  cout<<c<<endl;
   c=add(10,20);
  cout<<c<<endl;
}
