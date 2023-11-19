using namespace std;
#include<iostream>
class myarray
{
private:
   int len;
   int *p;
public:
    myarray(int len=0)
    {
        myarray::len=len;
        p=new int[len];
    }
    myarray(myarray &b)
    {
        len=b.len;
        p=new int[len];
    }
   void input()
   {
       cout<<"Enter "<<len<<" Elements"<<endl;
       for(int i=0;i<len;i++)
       {
           cout<<"Enter the elements:"<<endl;
           cin>>p[i];
       }
   }
   void show()
   {
       for(int i=0;i<len;i++)
       {
       cout<<p[i]<<"\t";
       }
   }
   int total()
   {
       int su=0;
       for(int i=0;i<len;i++)
       {
           su=su+p[i];
       }
       return su;
   }
   void Sort()
   {
       for(int i=0;i<len;i++)
       {
           for(int j=0;j<len-i-1;j++)
           {
               if(p[j]>p[j+1])
               {
               int temp=p[j];
               p[j]=p[j+1];
               p[j+1]=temp;
               }
           }
       }
       cout<<endl;
   }
void Reverse()
{
    for(int i=len-1;i>=0;i--)
    {
        cout<<p[i]<<"\t";
    }
}
void Search()
{
    int num;
    cout<<"enter the elem to search:"<<endl;
    cin>>num;
    for(int i=0;i<len-1;i++)
    {
        if(num=p[i])
        {
            cout<<"Elementis present"<<endl;
            break;
        }
        else
        {
            cout<<"Element is not there";
        }
    }
}
void Insert()
{
    int num;
    myarray a(len+1);
    cout<<"Enter the element to insert:"<<endl;
    cin>>num;
    for(int i=0;i<len+1;i++)
    {
        a[i]=p[i]+num;
    }
    for(int i=0;i<len+1;i++)
    {
        cout<<a[i]<<" ";
    }
}
};
int main()
{
    myarray a(5);
    a.input();
    cout<<"Array input"<<endl;
    a.show();
    a.Sort();
    cout<<"Array sorted"<<endl;
    a.show();
    cout<<"Array reverse"<<endl;
    a.Reverse();
    cout<<"Array total"<<endl;
    cout<<"The total of elements is:"<<a.total()<<endl;
    cout<<endl;
    a.Search();
    a.Insert()

}
