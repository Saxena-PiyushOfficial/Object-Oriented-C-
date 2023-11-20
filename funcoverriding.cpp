using namespace std;
#include<iostream>
class A
{
public:
    void show()
    {
        cout<<"Hello A";
    }
};
class B:public A
{
    public:
    void show()
    {
        cout<<"Hello B"<<endl;
    }
};
int main()
{

    B obj;
    obj.show();
    obj.A::show();

}
