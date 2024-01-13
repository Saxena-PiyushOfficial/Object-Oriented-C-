#include<iostream>
using namespace std;
#include<set>
int main()
{
    set<int> v={3,6,7,8,4,2};
v.insert(8);
v.insert(18);
v.insert(6);
    for(int x:v)
        cout<<x<<" ";

    cout<<endl;
    set<int>::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++)
        cout<<*itr<<" ";


}
