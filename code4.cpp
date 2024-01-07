#include<iostream>
using namespace std;
int main()
{
    double marks;
  cout<<"enter your marks"<<endl;
  cin>>marks;
  if(marks>40){
        cout<<"pass 2";
        if(marks>90)
            cout<<"with honours";
            else if(marks>40 && marks<70)
        {
            cout<<"second divivsion";

        }
  }else
  {

      cout<<"fail";
  }


}
