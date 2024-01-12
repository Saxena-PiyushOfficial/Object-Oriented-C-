#include<iostream>
using namespace std;
class Base{


   public:
       int i;
       void f1()
       {

        cout<<"F1 function of base class"<<endl;
       }
};
class Derived1:virtual public Base{

   public:
       int d1;
       void f2()
       {
           cout<<"this is f2 function of derived 1"<<endl;
       }

};
class Derived2:virtual public Base
{

public:
    int d2;
    void f3(){

     cout<<"This is function f3 of derived2"<<endl;
    }
};
class Derived:public Derived1,public Derived2{

   public:
      int l;
       void f4(){
         cout<<"This is function f4 of derived"<<endl;

       }



};
int main()
{


    Derived obj;
    obj.l=110;
    cout<<obj.l<<endl;
    obj.i=90;
    cout<<obj.i;
    obj.d1=10;
    cout<<obj.d1<<endl;
    obj.d2=100;
    cout<<obj.d2<<endl;
}
