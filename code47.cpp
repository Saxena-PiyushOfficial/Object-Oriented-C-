#include<iostream>
using namespace std;
#include<map>
int main()
{
    map<int,string> m;
m.insert(pair<int,string>(1,"Piyush"));
m.insert(pair<int,string>(2,"Rahul"));
m.insert(pair<int,string>(3,"John"));

 map<int,string>::iterator itr;
 for(itr=m.begin();itr!=m.end();itr++)
 {
     cout<<(itr->first)<<" "<<(itr->second)<<endl;
 }
 map<int,string>::iterator itr1;
 itr1=m.find(3);
 cout<<itr1->first<<" "<<itr1->second<<endl;
}
