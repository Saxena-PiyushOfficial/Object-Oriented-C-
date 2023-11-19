using namespace std;
#include<iostream>
#include<fstream>
#define size 20
int main()
{
    fstream f;
    char fname[size],ch;
    int count=0;

    cout<<"Enter program name like a.c or a.cpp: ";
    cin>>fname;
    f.open(fname,ios::in);
     if(!f.good())
    {
        cout<<endl<<"Program file does not exist";
    }
    else
    {
        cout<<endl<<"Content of file:"<<endl;
        while((ch=f.get())!=EOF)
        {
           if(ch=='{')
            {
                count++;
            }
            else if(ch=='}')
            {
                count--;
            }
        }
       if(count==0)
        cout<<endl<<"Balanced";
       else if(count<0)
       cout<<endl<<"Unexpected }";
       else
        cout<<endl<<"Expected }";
    }
    f.close();
}
