    #include<iostream>
    using namespace std;
    int func2(int);
    int func1(int ,int);
    int main()
    {
        int total;
       total=func1(89,54);
       cout<<total;
       int sq=func2(total);
       cout<<" square is= "<<sq;
    }

    int func1(int a,int b)
    {
        int sum=a+b;
        return sum;
    }
    int func2(int total)
    {
      return total*total;
    }

