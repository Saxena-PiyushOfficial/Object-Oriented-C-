using namespace std;
#include<stdio.h>
#include<iostream>
class School
{
  private:
  char Name[50];
  int Pincode;
  char city[50],state[50];

  public:
    void input1()
    {
        cout<<"Enter the school name: "<<endl;
        cin.getline(Name,50);
       fflush(stdin);
        cout<<"Enter the Pincode:"<<endl;
        cin>>Pincode;
        fflush(stdin);
        cout<<"Enter the city: "<<endl;
        cin.getline(city,50);
        fflush(stdin);
        cout<<"Enter the state: "<<endl;
        cin.getline(state,50);
        fflush(stdin);
    }
    void show1()
    {
        cout<<endl<<"School Name: "<<Name<<endl<<"City: "<<city<<endl<<"State: "<<state<<endl<<"Pincode:"<<Pincode<<endl;
    }
};
class student:public School
{

    char name[50];
    int rollno,standard;
    char hobby[50];
    public:
    void input2()
    {
        cout<<"Enter the Name: "<<endl;
        cin.getline(name,50);
    fflush(stdin);
        cout<<"Enter the RollNo:"<<endl;
        cin>>rollno;
fflush(stdin);
        cout<<"Enter the class: "<<endl;
        cin>>standard;
fflush(stdin);
        cout<<"Enter the hobby: "<<endl;
        cin.getline(hobby,50);
    }
    void show2()
    {
        cout<<endl<<"Name: "<<name<<endl<<"RollNo: "<<rollno<<endl<<"Class: "<<standard<<endl<<"Hobby:"<<hobby<<endl;
    }
};
int main()
{
    student obj;

    obj.input1();
    obj.show1();
    obj.input2();
    obj.show2();
}
