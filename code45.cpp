#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> v={3,6,7,8,4,2};

    v.push_back(45);
    v.push_back(5);
    v.pop_back();
    for(int x:v)
        cout<<x<<" ";

    cout<<endl;
    vector<int>::iterator itr;
   /* for(itr=v.begin();itr<v.end();itr++)
        cout<<*itr<<" ";*/
        for(itr=v.begin();itr<v.end();itr++)
        cout<<++*itr<<" ";

}
