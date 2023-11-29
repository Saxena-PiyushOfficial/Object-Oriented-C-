using namespace std;
#include<iostream>

template<class T>
  void input(T x[],int n)
  {
      for(int i=0;i<n;i++)
      {
      cout<<"enter the elements"<<endl;
      cin>>x[i];
      }
  }
  template<class T>
  void show(T x[],int n)
  {
      for(int i=0;i<n;i++)
      {
          cout<<x[i]<<"\t";
      }
  }
template<class T>
sortArray(T a[],int n)
{
    int i,j;
    T t;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            }
        }

    }
    cout<<endl;
}



int main()
{

    float a[5];
    input(a,5);
    show(a,5);
    sortArray(a,5);
    show(a,5);
}
