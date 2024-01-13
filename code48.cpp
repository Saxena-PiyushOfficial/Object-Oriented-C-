#include<iostream>
class Base
{
public:
virtual void Method()=0;
private:
int n;
};
class D1:Base {};
class D2:public D1
{
int i;
void Method(){i=2;}
};
int main()
{
D2 test;
return 0;
}
