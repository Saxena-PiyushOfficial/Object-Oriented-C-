using namespace std;
#include<iostream>
class car
{
public:

    virtual int light()=0;
    virtual int mirror()=0;
    virtual int seat()=0;
    virtual int gear()=0;
    virtual int lock()=0;
    virtual int seatcapacity()=0;
};
class Maruti800:public car
{
public:
    int tyrecount()
    {
        return 4;
    }
    int light()
    {
        return 10;
    }
    int mirror()
    {
        return 18;
    }
    int seat()
    {
        return 3;
    }
    int gear()
    {
        return 6;
    }
    int lock()
    {
        return 3;
    }
    int seatcapacity()
    {
        return 5;
    }
};
int main()
{
        car *p;
        Maruti800 m1;
        p=&m1;
        int a=p->seatcapacity();
        cout<<"seat capacity:"<<a<<endl;

}
