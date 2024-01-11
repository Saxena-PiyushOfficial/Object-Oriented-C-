#include<iostream>
using namespace std;
namespace N1{
  int a=10;
}
namespace N2{
  int a=30;
}
namespace N3{
  int b=10;
  namespace N4{
  int b=70;
}
}

int main()
{
  cout<<N1::a<<endl;
  cout<<N2::a<<endl;
  cout<<N3::N4::b<<endl;
  bool a=10;
  cout<<a;
}
