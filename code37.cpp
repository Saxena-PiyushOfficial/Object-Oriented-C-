#include<iostream>
using namespace std;
class Base{
    int a;
    public:
    void f1()
    {
       cout<<"This is base func1";

    }
    void f2()
    {
       cout<<"This is base func2";

    }

};
class Derived:public Base{

    public:
          int b;
    void f3()
    {
       cout<<"This is derived func3";

    }
    void f2()
    {
       cout<<"This is derived func2";

    }

};
/*int main()
{
   Derived obj;
   obj.f2();
   cout<<endl;
   obj.Base::f2();
   //obj.a=10;
   obj.b=20;
//cout<<obj.a<<endl;
   cout<<endl<<obj.b<<endl;

}*/
int main()
{
   Derived objD;
      Base objB;
   Base *p=&objD;
  // p->b=28;
    p->f2();
   // Base *pp=new Derived();
   // pp->f2();

}
