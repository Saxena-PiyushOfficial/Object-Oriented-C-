using namespace std;
#include<iostream>
class complex
{
public:
    int re,im,re1,im1;

    void input()
    {
        cout<<"Enter the real and imaginary part of 1st complex: "<<endl;
        cin>>re>>im;
        cout<<"Enter the real and imaginary part of 2nd complex: "<<endl;
        cin>>re1>>im1;
    }
    void show()
    {
        cout<<re<<"+i"<<im<<endl<<re1<<"+i"<<im1<<endl;
    }
};
class addition:public complex
{
public:
    int real,imag;
    void sum()
    {
        real=re+re1;
        imag=im+im1;
    }
    void show()
    {
        cout<<"The sum is: "<<real<<"+i"<<imag<<endl;
    }
};
class multi:public complex
{
public:
    int r,img;
    void mul()
    {
        r=re*re1-im*im1;
        img=re*im1+re1*im;
    }
    void show()
    {
        cout<<"The multiplication is: "<<r<<"+i"<<img<<endl;
    }
};
int main()
{
    addition a1;
    multi m1;
    a1.complex::input();
    a1.complex::show();
    a1.sum();
    a1.show();
    m1.complex::input();
    m1.complex::show();
    m1.mul();
    m1.show();

}
