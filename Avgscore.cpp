#include<iostream>
using namespace std;
int main()
{
   int num_of_stud;
   double avg_score=0;
   cout<<"Enter the number of students";
   cin<<num_of_stud;
   int i,j;
   for(i=1;i<=num_of_stud;i++)
   {
      string name;
      int arr[3];
      cout<<"enter the name of students";
      cin>>name;
      for(j=0;j<3;j++)
      {
        cout<<"enter the score (0 to 100)in assignment";
      cin>>arr[j];
         avg_score=avg_score+arr[j];
      }
        avg_score/=3;
         cout<<"Average score is";
         cout<<avg_score;
 
   }
}
