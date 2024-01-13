#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    //ofstream out("My.txt");
    //out<<"Hello World"<<endl;
    //out<<129;
    ofstream out("My.txt",ios::app);
    out<<endl<<"this is the appended content"<<endl;

    out.close();
}
