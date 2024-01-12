#include<iostream>
using namespace std;

template<class T>
void swapme(T &a, T &b) {
 cout << "Calling template function\n";
 T t;
 t = a; a = b; b = t;
}
int main() {
 int x = 10, y = 20;
cout << "\nBefore swap x = " << x << ", y = " << y << "\n";
 swapme(x, y);
cout << "After swap x = " << x << ", y = " << y << "\n";
 float f1 = 1.5, f2 = 2.5;
cout << "\nBefore swap f1 = " << f1 << ", f2 = " << f2 << "\n";
 swapme(f1, f2);
cout << "After swap f1 = " << f1 << ", f2 = " << f2 << "\n";
 return 0;
}
