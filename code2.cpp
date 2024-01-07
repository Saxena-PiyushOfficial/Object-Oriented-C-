#include<iostream>
using namespace std;
void swap(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
int factorial(int a)
{
    int f=1;
    for(int i=1;i<=a;i++)
    {

        f=f*i;
    }
    return f;

}
int area(int a,int b)
{
    int ar;
    ar=a*b;
    return ar;

}
int main()
{
    int a,b,sum;
    cout<<"enter value for a="<<endl;
    cin>>a;
    cout<<"enter value for b="<<endl;
    cin>>b;
    cout<<"value for a="<<a<<endl;

    cout<<"value for b="<<b<<endl;
    sum=a+b;
    int fact=factorial(a);
        int ar=area(a,b);
    cout<<"sum="<<sum<<endl;
    cout<<"factorial="<<fact<<endl;
    cout<<"area="<<ar<<endl;
    swap(&a,&b);
     cout<<"value for a="<<a<<endl;

    cout<<"value for b="<<b<<endl;
    int x(45);
     int y{67};
    cout<<x<<" "<<y;
    return 0;
}

