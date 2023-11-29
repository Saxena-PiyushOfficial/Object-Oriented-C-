using namespace std;
#include<iostream>

void Swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
void Swap(float *a,float *b)
{
    float t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    int i=10,j=20;
    Swap(&i,&j);
    cout<<i<<"\t"<<j;
    cout<<endl;
    float a=2.5,b=7.9;
    Swap(&a,&b);
    cout<<a<<"\t"<<b;
}
