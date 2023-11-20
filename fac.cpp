using namespace std;
#include<iostream>
int fact(int n)
{
   int i,fact=1;
   for(i=n;i>=1;i--)
   {
   fact=fact*i;
   }
   return fact;
}
