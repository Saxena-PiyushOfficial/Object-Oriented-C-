using namespace std;
#include<iostream>
class complex
{
private:
    double re,im;
public:
    complex(double re=1,double im=1)
    {
        complex::re=re;
        complex::im=im;
    }
    complex operator+(complex b)
    {
        complex ans;
        ans.re=re+b.re;
        ans.im=im+b.im;
        return ans;
    }
    complex operator*(complex m)
    {
        complex ans;
        ans.re=re*m.re-im*m.im;
        ans.im=re*m.im+im*m.re;
        return ans;
    }
    complex &operator+=(complex x)
    {

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
    complex c1(5,-4),c2(3,2);
    complex c3,c4,c5;
    c3=c1+c2;
    c4=c1*c2;
    c1+=c2;
    c1.show();
    c2.show();
    c3.show();
    c4.show();
}
