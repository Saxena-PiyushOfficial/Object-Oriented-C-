using namespace std;
#include<iostream>

class travel
{
private://used only inside the class.
  char city1[20],city2[20];
  float dist;
public://used both inside and outside the class.
  void input();
  void display();
  float fare();
};
void travel::input()
{
    {
    cout<<"Enter the city 1 "<<endl;
    cin.getline(city1,20);
    cout<<"Enter the city 2 "<<endl;
    cin.getline(city2,20);
    cout<<"Enter the total Distance(in Km)"<<endl;
    cin>>dist;
    cout<<"\n";
    }
}
void travel::display()
{
    {
    cout<<"From: "<<city1<<endl<<"To: "<<city2<<endl<<"Distance: "<<dist<<" Km"<<endl;
    }
}
float travel::fare()
  {
      return dist*2.8;
  }

int main()
{
    travel t1;
    t1.input();
    t1.display();
    float f=t1.fare();
    cout<<"Fare : "<<f<<" Rs"<<endl;
}
