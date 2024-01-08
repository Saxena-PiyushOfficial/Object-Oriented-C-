#include<iostream>
using namespace std;
void f1();
void f2();
int a=10;
int main()
{
  ++a;
  cout<<a<<endl;
  cout<<"check 1 completed";
  f1();
  cout<<a<<endl;
  cout<<"check 2 completed";
  f2();
  cout<<a<<endl;
    cout<<"check 3 completed";
}
void f1(){
   int a=5;
   a++;
   cout<<a<<endl;
}
void f2()
{
    ++a;
    cout<<a<<endl;
}
