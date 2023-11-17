using namespace std;
#include<iostream>
#include<stdio.h>
#include<fstream>
int main()
{
    ofstream  f;
    char msg[200];
    f.open("vgt.txt",ios::app);
    if(!f.good())
    {
        cout<<endl<<"Error:Unable to create or open file";
    }
    else
    {
        cout<<"Enter text: ";
        gets(msg);
        for(int i=0;msg[i]='\0';i++)
        {
            f.put(msg[i]);
        }
        f.put('\n');
        cout<<endl<<"Message saved";
    }
    f.close();
}
