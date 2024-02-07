#include<iostream>
using namespace std;
int main()
{
     int num1,num2;
     cin>>num1;
     cin>>num2;
     int i;
     for(i=num1;i<num2;i++)
     {
        if(num1%2==0)
        {
             break;
        }
        else
        {
        cout<<i;
        num1++;
        }
     }
}
