#include<iostream>
using namespace std;
class Base{

   public :
 int a;
       void f1()
       {

    cout<<"this is f1 function";
       }


};
class Derived:public Base
{

   public :
int b;
       void f2()
       {

    cout<<"this is f2 function";
       }


};
int main()
{
    //Base b1;
    //b1.a=10;
    //b1.f1();
    //cout<<b1.a<<endl;
    Derived d1;
    d1.b=10;
    d1.a=20;
    d1.f1();
    d1.f2();
    cout<<d1.b<<" "<<d1.a;

}
