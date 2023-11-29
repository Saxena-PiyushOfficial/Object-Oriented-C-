using namespace std;
#include<iostream>
class vector
{
 private:
    int i,j,k;
 public:
    vector(int i=1,int j=1,int k=1)
    {
        vector::i=i;
        vector::j=j;
        vector::k=k;
    }
    vector operator+(vector v)
    {
        vector ans;
        ans.i=i+v.i;
        ans.j=j+v.j;
        ans.k=k+v.k;
        return ans;
    }
    int operator*(vector v)
    {
        int ans;
        ans=i*v.i+j*v.j+k*v.k;
        return ans;

    }
    vector operator^(vector v)
    {
        vector ans;
        ans.i=j*v.k-k*v.j;
        ans.j=k*v.i-i*v.k;
        ans.k=i*v.j-j*v.i;
        return ans;
    }
    void show()
    {

        {
            cout<<"("<<i<<")i"<<"+("<<j<<")j"<<"+("<<k<<")k"<<endl;
        }
    }
};
int main()
{
    vector v1(2,6,12),v2(2,3,4);
    vector v3,v4;
    v3=v1+v2;
    int a=v1*v2;
    v4=v1^v2;
    v1.show();
    v2.show();
    v3.show();
    v4.show();
   cout<<a<<endl;
}
