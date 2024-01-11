#include<iostream>
using namespace std;
class X
{
    int i;

public :
    static int j;
    X():i(0)
    {

    }

};
int X::j=10;
int main()
{
   X obj;
   X::j=56;
   cout<<X::j<<endl;
   cout<<obj.j<<endl;
}
