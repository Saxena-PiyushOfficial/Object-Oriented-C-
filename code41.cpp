////Insertion operator overloading
#include<iostream>
using namespace std;
class Complex{
     int img;
     int real;
 public:
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    void display()
    {
        cout<<real<<" +i "<<img<<endl;
    }

};

int main()
{
   Complex c1;
   int i=5;
   c1=i;
   c1.display();
}

