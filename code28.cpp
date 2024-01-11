#include<iostream>
using namespace std;
void printString(char s[])
{
    int i=0;
    while(s[i]!='\0')
    {

    cout<<s[i]<<" ";
    i++;
    }
}
int main()
{
    char s1[]="Hello";
    printString(s1);
}

