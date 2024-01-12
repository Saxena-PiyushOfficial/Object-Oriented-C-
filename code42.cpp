#include<iostream>
using namespace std;
class myoperator
{
  public:

      bool operator==(myoperator temp);
};
  bool myoperator::operator==(myoperator temp)
  {
      if(*this==temp)
      {
        cout<<"The two objects are equal\n";
        return true;
      }else
      {
          cout<<"Th two objects are different";
          return false;
      }

  }
  int main()
  {
      myoperator a1,a2;
      a1==a2;
  }

