using namespace std;
#include<iostream>
class sqr
{
  private:
     double s;
  public:
    void input()
    {
        cout<<"Enter the side length:"<<endl;
        cin>>s;
    }
    double area()
    {
        return s*s;
    }
    double perimeter()
    {
        return 4*s;
    }
};
int main()
{
    sqr s1,s2;
    s1.input();
    double a1=s1.area();
    double p1=s1.perimeter();
    cout<<"Area is= "<<a1<<"\tPerimeter is= "<<p1<<endl<<endl;
     s2.input();
    double a2=s2.area();
    double p2=s2.perimeter();
    cout<<"Area is= "<<a2<<"\tPerimeter is = "<<p2<<endl;
}
