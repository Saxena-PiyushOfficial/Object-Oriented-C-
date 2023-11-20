using namespace std;
#include<iostream>
class A
{
  private: int x;
  protected:
  int y;
  public:
  int z;
  A()
  {
    x=10;
    y=20;
    z=30;
  }
  void show()
  {
      cout<<" Hello A "<<x;
      cout<<" Hello A "<<y;
      cout<<" Hello A "<<z;

  }
};
class B:public A
{
public:
    void show()
    {
      /*cout<<" Hello b "<<x;*/
      cout<<" Hello b "<<y;
      cout<<" Hello b "<<z;
    }

};
class C:private B
{
public:
    void show()
    {
    /*cout<<" Hello c "<<x;*/
      cout<<" Hello c "<<y;
      cout<<" Hello c "<<z;
    }
};
int main()
{
    A obj1;
    B obj2;
    C obj3;

   obj3.show();
}
