using namespace std;
#include<iostream>
class Complex
{
  private:
  double re,im;
  public:
  Complex(double re=1,double im=1)
  {
     Complex::re=re;
     Complex::im=im;
  }
  void operator++()
  {
  re=re+1;
  im=im+1;
  }
  void operator++(int a)
  {
  re=re+1;
  im=im+1;
  }
   void show()
   {
     if(im<0)
     {
      cout<<re<<im<<"i"<<endl;
     }
     else
     {
     cout<<re<<"+"<<im<<"i"<<endl;
     }
   }
};
int main()
{
  Complex c1(4,5);
  c1++;
  c1.show();
  ++c1;
  c1.show();

}
