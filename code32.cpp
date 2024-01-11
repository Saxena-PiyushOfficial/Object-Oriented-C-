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
    Complex operator+(Complex obj)
    {
        Complex temp;
        temp.real=real+obj.real;
        temp.img=img+obj.img;

        return temp;
    }
     int getReal()
     {
         return real;
     }
     int getImg()
     {
         return img;
     }
};
int main()
{

    Complex c1(7,8);
    Complex c2(5,3);
    Complex c3;
    c3=c1+c2;
    cout<<c3.getReal()<<" +"<<c3.getImg()<<"i"<<endl;








}
