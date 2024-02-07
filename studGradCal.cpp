#include<iostream>
using namespace std;
int main()
{
   int num;
  
   cout<<"Enter the number of students";
   cin>>num;
   int i,j;
   for(i=1;i<=num;i++)
   {
      string name;
      string surname;
       double avg_score=0;
      int arr[3];
      cout<<"enter the name of student first name   : ";
      cin>>name;
      cout<<"Enter Surname : ";
      cin>>surname;
      cout<<"Full Name "<<endl;
      cout<<name + "  " + surname<<endl;
      for(j=0;j<3;j++)
      {
         cout<<"enter the score (0 to 100)in assignment  : ";
          cin>>arr[j];
        if(arr[j]<0 || arr[j]>100)
        {
            cout<<"Invalid score"<<endl;
            arr[j]=0;
            break;
        }
         avg_score=avg_score+arr[j];
      }
         avg_score/=3;
         cout<<"Average score is  : ";
         cout<<avg_score<<endl;
         
         
         if(avg_score >=90 && avg_score <= 100)
            cout<<"Grade A"<<endl;
         else if (avg_score >= 80 && avg_score <= 89)
            cout<<"Grade B"<<endl;   
         else if (avg_score >=70 && avg_score <= 79)
            cout<<"Grade C"<<endl;   
         else if (avg_score >=60 && avg_score <=69)
            cout<<"Grade D"<<endl;   
        else
             cout<<" Grade F";  
                     
            
            
   }
}
