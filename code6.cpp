#include<iostream>
using namespace std;
int main()
{
    int day;
   cout<<"enter the day number"<<endl;
   cin>>day;
   switch(day)
   {
       case 1:cout<<"sun ";
       break;
       case 2:cout<<"mon ";
       break;
       case 3:cout<<"tues ";
       break;
       case 4:cout<<"wed ";
       break;
       case 5:cout<<"thurs ";
       break;
       case 6:cout<<"fri ";
       break;
       case 7:cout<<"sat ";
       break;
   }

   if(day==1||day==3||day==5||day||7)
    cout<<"half day ";
   else
    cout<<"full day ";
 switch(day)
   {
       case 1:

       case 2:

       case 3:

       case 4:
            cout<<"party and bonus";
            break;
       case 5:
       case 6:
       case 7:cout<<"only work";
   }
}
