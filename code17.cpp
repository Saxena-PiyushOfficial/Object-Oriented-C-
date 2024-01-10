#include<iostream>
using namespace std;
int somefunction(int num)
{

    if(num==1||num==2)
        return 1;

    return somefunction(num-1)+somefunction(num-2);
}
int main()
{

  int ans=somefunction(4);
  cout<<ans;
}
