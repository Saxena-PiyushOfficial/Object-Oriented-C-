using namespace std;
#include<iostream>
class A
{
public:
   virtual  void show()
    {
        cout<<endl<<"Helo A";

    }
};
class B :public A
{
    void show()
    {
        cout<<endl<<"Helo B";
    }
};
int main()
{
    A *p;
    B obj;
    p=&obj;
    p->show();
}
