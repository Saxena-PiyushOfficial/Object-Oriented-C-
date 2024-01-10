#include<iostream>
using namespace std;
int add(int a,int b,int c)
{
    int sum=a+b+c;
    return sum;
}
float add(float a,float b=0)
{

    return a+b;
}
/*float add(float a,float b,float c=0)
{

    return a+b+c;
}*/
int main()
{
    int a,b,c;
    cout<<"enter the values:"<<endl;
    cin>>a>>b>>c;
    int total=add(a,b,c);
    cout<<"The total is :"<<total;
    float x,y,z;
    cout<<"enter the numbers in float"<<endl;
    cin>>x;
    float sum=add(x);
    cout<<"The sum is: "<<sum;
    /*float twosum=add(y,z);
    cout<<"The sum of two float is: "<<twosum;*/
}
