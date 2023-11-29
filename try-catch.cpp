using namespace std;
#include<iostream>
int main()
{
int a,b,ans;
cout<<"Enter the two number:"<<endl;
cin>>a>>b;
cout<<"Hello 1"<<endl;
try
{
    if(b!=0)
    {
        ans=a/b;
        cout<<"The result is:"<<ans<<endl;
    }
    else
    {
        throw b;
    }
}
    catch(int arg)
    {
        cout<<"The second number cannot be zero"<<endl;
    }
    cout<<"Successful";
}

