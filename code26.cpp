#include<iostream>
using namespace std;

int main()
{
    int A[5]={1,2,3,4,5};
    int *p=A;
    //cout<<*p<<endl;
    /*p++;
    cout<<*p<<endl;
      p--;
    cout<<*p<<endl;
    p=p+2;
        cout<<*p<<endl;
        p=p-2;
        cout<<*p<<endl;
        cout<<*p+8<<endl;*/
        int *q=&A[4];
        //int d=q-p;
          int d=p-q;//-ve thatis p is first and q is 4th
       // cout<<d;
        cout<<sizeof(A)/sizeof(int);

}
