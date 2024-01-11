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
   friend ostream& operator<<(ostream&,Complex&);
};
   ostream & operator<<(ostream &out,Complex &obj)
   {
        out<<obj.real<<" +i "<<obj.img;
        return out;
   }
int main()
{
    Complex c1(7,18);
    //c1.display();
    cout<<c1;//operator(cout,c)
}

