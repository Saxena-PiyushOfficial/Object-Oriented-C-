#include<iostream>
using namespace std;
int main()
{
   int num;

    /*cout<<"Enter a positive number"<<endl;
     cin>>num;
     if(num<0)
     {
         cout<<"Invalid Number";
     }
     else
     {
         cout<<num;
     }*/
     do{
        cout<<"Enter a positive number"<<endl;
     cin>>num;
     if(num <0 ){
         cout<<"Invalid Number";

     }
     else
        cout<<num;
     }while(true);
}
