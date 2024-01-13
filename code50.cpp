#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    //ifstream in("My.txt");
    //string name;
    //int roll;
    //string branch;
    //in>>name>>roll>>branch;
    //in.close();
    //cout<<"name: "<<name<<" roll: "<<roll<<" branch: "<<branch<<endl;


    ifstream in;
    in.open("My.txt");
    //if(in)
        if(in.is_open()))
        cout<<"file is opened"<<endl;
    string name;
    int roll;
    string branch;
    in>>name>>roll>>branch;
    in.close();
    cout<<"name: "<<name<<" roll: "<<roll<<" branch: "<<branch<<endl;
}
