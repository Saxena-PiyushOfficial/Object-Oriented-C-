#include<iostream>
using namespace std;

int main()
{
   const int C=34;
   //int &a=C;Invalid error
  const int &a=C;
   cout<<&a<<" "<<C;
   //&a---->gives address
   //a---->gives actual value

   int b=10;
   int &x=b;
   cout<<x<<" "<<b;
   b=90;
     cout<<x<<" "<<b;
    int &y=x;
     cout<<x<<" "<<y<<" "<<b;

     y=900;
     cout<<y;
}
