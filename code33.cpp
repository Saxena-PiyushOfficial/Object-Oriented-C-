#include<iostream>
using namespace std;
class Complex{
     int img;
     int real;

 public:
    Complex(int r=0,int i=0)
    {
        this->real=r;
        this->img=i;
    }

     int getReal()
     {
         return real;
     }
     int getImg()
     {
         return img;
     }
     friend Complex operator+(Complex obj1,Complex obj2);
};
   Complex operator+(Complex obj1,Complex obj2)
    {
        Complex temp;
        temp.real=obj1.real+obj2.real;
        temp.img=obj1.img+obj2.img;

        return temp;
    }
int main()
{

    Complex c1(17,18);
    Complex c2(15,13);
    Complex c3;
    c3=c1+c2;
    cout<<c3.getReal()<<" +"<<c3.getImg()<<"i"<<endl;








}

