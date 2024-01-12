#include<iostream>
using namespace std;
int a=1;
    int &geta()
    {
        return a;
    }
    int main()
    {
            geta()++;
            ++geta();
            cout<<(a&7);
    }
