using namespace std;
#include<iostream>
/*void swap(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
}*/
void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
/*void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}*/
int main()
{
  int a=5,b=7;
  swap(a,b);
  cout<<"a= "<<a<<"\tb= "<<b;

}

