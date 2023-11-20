using namespace std;
#include<iostream>
#include<iomanip>
int main()
{
  int a=1234567;
  cout<<a<<endl;
  cout<<setfill('*')<<setw(7)<<a;
}
