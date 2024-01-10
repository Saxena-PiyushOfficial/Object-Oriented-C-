#include<iostream>
using namespace std;
int main(){
  int a=10;
  int *p;
  p=&a;
  cout<<a<<endl;
  cout<<&a<<endl;
  cout<<p<<endl;
  cout<<&p<<endl;
  cout<<*p<<endl;
  int *q=new int[5];
  q[2]=90;
  q[3]=34;
  cout<<q[3];
  delete []q;
  q=nullptr;
}
